#include <stdio.h>
#include <unistd.h>
int main()
{
	unsigned char buf[10] = {10};
	buf[0] = -1;
	buf[1] = 255;
	buf[2] = 129;
	

	printf("buf[0] : %d\n", buf[0]);
	printf("(char)buf[0] : %d\n", (char)buf[0]);
	printf("buf[1] : %d\n", buf[1]);
	printf("buf[2] : %d\n", buf[2]);
	char hex[10] = {0};
	hex[0] = 0XFF;
	printf("hex[0] : %d\n", hex[0]);
	printf("hex[0] : %x\n", hex[0]);

	return 1;
}
