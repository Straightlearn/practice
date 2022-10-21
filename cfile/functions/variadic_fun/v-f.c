#include <stdio.h>
#include <stdarg.h>

int variadic_addiction (int count ,...)
{
	va_list args;
	int i, sum;

	va_start (args,count); //save arguments in list
	sum = 0;

	for (i=0; i < count; i++)
	sum += va_arg (args,int);// get the next arguement value

	va_end (args);//stop traversal
	return sum;
}

int main()
{
	//call 1: 4 arguments
	printf("sum: %d\n", variadic_addiction(3,10,20));
	//call 2: 6 arguments
	printf("sum: %d\n", variadic_addiction(3,1    0,20,7,7));
	return 0;
}
