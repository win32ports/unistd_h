#ifdef NDEBUG
#undef NDEBUG
#endif

#include <unistd.h>
#include <assert.h>

int main()
{
	assert(access("dummy", R_OK) == -1);
	assert(access("dummy", W_OK) == -1);
	assert(access("dummy", X_OK) == -1);
	assert(access("dummy", F_OK) == -1);

	int fd2 = dup(STDIN_FILENO);
	assert(fd2 != STDIN_FILENO);
	close(fd2);
	_mkdir("temp");
	assert(rmdir("temp") == 0);
}
