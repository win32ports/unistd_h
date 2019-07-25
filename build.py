#!/usr/bin/env python
# -*- coding: utf-8 -*-
# vim: tabstop=8 expandtab shiftwidth=4 softtabstop=4

from __future__ import print_function
import os
import sys

def show_file(filename):
    if os.path.isfile(filename):
        with open(filename, 'r') as f:
            contents = f.read()
            print("%s:" % filename)
            print(contents)

def run(command):
    if "VCVARS" in os.environ:
        command = 'call "%s" amd64 && ' % os.environ["VCVARS"] + command
    status = os.system(command)
    if 0 != status:
        show_file(os.path.join("CMakeFiles", "CMakeOutput.log"))
        show_file(os.path.join("CMakeFiles", "CMakeError.log"))
        sys.exit(command)

def main():
    if "MINGW_HOME" in os.environ:
        os.environ["PATH"] = os.environ["MINGW_HOME"] + os.pathsep + os.environ["PATH"]
    generator = os.environ["CMAKE_GENERATOR"]
    multi_config = generator.startswith("Visual")
    command = 'cmake . -G "%s"' % generator
    for env in os.environ:
        if env.startswith("CMAKE"):
            command += ' -D%s="%s"' % (env, os.environ[env])
    if not multi_config:
        command += ' -DCMAKE_BUILD_TYPE=Release'
    run(command)
    command = 'cmake --build .'
    if multi_config:
        command += ' --config Release'
    run(command)

if __name__ == '__main__':
    main()
