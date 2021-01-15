#include <stdio.h>

int main(int argc,char *argv[])
{
	int a = *argv[0] - '0';
	int b = *argv[1] - '0';
	printf("%d", a + b);
}

