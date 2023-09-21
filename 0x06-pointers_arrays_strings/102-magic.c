#include <stdio.h>

int main(void)
{
	int a[5];
	int *p;
	int n;

	p = &n;
	a[2] = 1024;
	printf("a[2] = %d\n", a[2]);
	return (0);
}

