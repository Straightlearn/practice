#include <stdio.h>

int main()
{
	int a, *ptr;
	ptr=&a;
	a=4;
	printf("  %d\n", a);
	printf("  %d\n", *ptr);
	*ptr=60;/*
		 *here we dereferenced the pointer
		 *changing the value contained in
		 *in the address from 4 to 60
		 */
	printf("  %d\n", a);
	printf("  %d", *ptr);
}
