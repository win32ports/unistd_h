/*
MIT License
Copyright (c) 2019 win32ports
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#ifndef __UNISTD_H_17CD2BD1_839A_4E25_97C7_DE9544B8B59C__
#define __UNISTD_H_17CD2BD1_839A_4E25_97C7_DE9544B8B59C__

#ifndef _WIN32

#pragma message("this unistd.h implementation is for Windows only!")

#else /* _WIN32 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef _INC_IO
#include <io.h> /* _access() */
#endif /* _INC_IO */

#ifndef _INC_DIRECT
#include <direct.h> /* _chdir() */
#endif /* _INC_DIRECT */

#ifndef _INC_PROCESS
#include <process.h> /* _execl() */
#endif /* _INC_PROCESS */

#ifndef access
#define access _access
#endif /* access */

#ifndef R_OK
#define R_OK 04
#endif /* R_OK */

#ifndef W_OK
#define W_OK 02
#endif /* W_OK */

#ifndef X_OK
#define X_OK R_OK
#endif /* X_OK */

#ifndef F_OK
#define F_OK 00
#endif /* F_OK */

#ifndef chdir
#define chdir _chdir
#endif /* chdir */

#ifndef close
#define close _close
#endif /* close */

#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#endif /* STDIN_FILENO */

#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif /* STDOUT_FILENO */

#ifndef STDERR_FILENO
#define STDERR_FILENO 2
#endif /* STDERR_FILENO */

#ifndef dup
#define dup _dup
#endif /* dup */

#ifndef dup2
#define dup2 _dup2
#endif /* dup2 */

#ifndef execl
#define execl _execl
#endif /* execl */

#ifndef execle
#define execle _execle
#endif /* execle */

#ifndef execlp
#define execlp _execlp
#endif /* execlp */

#ifndef execp
#define execp _execp
#endif /* execp */

#ifndef execpe
#define execpe _execpe
#endif /* execpe */

#ifndef execpp
#define execpp _execpp
#endif /* execpp */

#ifndef rmdir
#define rmdir _rmdir
#endif /* rmdir */

/* permission bits below must be defined in sys/stat.h, but MSVC lacks them */

#ifndef S_IRWXU
#define S_IRWXU 0700
#endif /* S_IRWXU */

#ifndef S_IRUSR
#define S_IRUSR 0400
#endif /* S_IRUSR */

#ifndef S_IWUSR
#define S_IWUSR 0200
#endif /* S_IWUSR */

#ifndef S_IXUSR
#define S_IXUSR 0100
#endif /* S_IXUSR */

#ifndef S_IRWXG
#define S_IRWXG 070
#endif /* S_IRWXG */

#ifndef S_IRGRP
#define S_IRGRP 040
#endif /* S_IRGRP */

#ifndef S_IWGRP
#define S_IWGRP 020
#endif /* S_IWGRP */

#ifndef S_IXGRP
#define S_IXGRP 010
#endif /* S_IXGRP */

#ifndef S_IRWXO
#define S_IRWXO 07
#endif /* S_IRWXO */

#ifndef S_IROTH
#define S_IROTH 04
#endif /* S_IROTH */

#ifndef S_IWOTH
#define S_IWOTH 02
#endif /* S_IWOTH */

#ifndef S_IXOTH
#define S_IXOTH 01
#endif /* S_IXOTH */

#ifndef S_ISUID
#define S_ISUID 04000
#endif /* S_ISUID */

#ifndef S_ISGID
#define S_ISGID 02000
#endif /* S_ISGID */

#ifndef S_ISVTX
#define S_ISVTX 01000
#endif /* S_ISVTX */

#ifndef S_IRWXUGO
#define S_IRWXUGO 0777
#endif /* S_IRWXUGO */

#ifndef S_IALLUGO
#define S_IALLUGO 0777
#endif /* S_IALLUGO */	

#ifndef S_IRUGO
#define S_IRUGO 0444
#endif /* S_IRUGO */

#ifndef S_IWUGO
#define S_IWUGO 0222
#endif /* S_IWUGO */

#ifndef S_IXUGO
#define S_IXUGO 0111
#endif /* S_IXUGO */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _WIN32 */

#endif /* __UNISTD_H_17CD2BD1_839A_4E25_97C7_DE9544B8B59C__ */
