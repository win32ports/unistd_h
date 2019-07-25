#ifdef NDEBUG
#undef NDEBUG
#endif

#include <unistd.h>
#include <assert.h>
#include <stdio.h>

int main()
{
	struct stat s;

	assert(access("dummy", R_OK) == -1);
	assert(access("dummy", W_OK) == -1);
	assert(access("dummy", X_OK) == -1);
	assert(access("dummy", F_OK) == -1);

	FILE* f = fopen("dummy", "wb");
	assert(f);
	fclose(f);

	stat("dummy", &s);

	assert(S_ISREG(s.st_mode));
	assert(!S_ISDIR(s.st_mode));

	assert(access("dummy", R_OK) == 0);
	assert(access("dummy", W_OK) == 0);
	assert(access("dummy", X_OK) == 0);
	assert(access("dummy", F_OK) == 0);

	unlink("dummy");

	int fd2 = dup(STDIN_FILENO);
	assert(fd2 != STDIN_FILENO);
	close(fd2);

	assert(rmdir("temp") == -1);
	assert(_mkdir("temp") == 0);

	stat("temp", &s);
	assert(!S_ISREG(s.st_mode));
	assert(S_ISDIR(s.st_mode));

	assert(rmdir("temp") == 0);
}
