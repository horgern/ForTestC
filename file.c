#include <stdio.h>
#include <unistd.h>
int main()
{
	char path[256] = {0};
	getcwd(path, 256);
	printf("%s\n", path);
	return 1;
}
