#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 void swap_int(int *a, int *b); //function prototype
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b); //function calling
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
    void swap_int(int *a, int *b)//function definition
{
	int i;
	
	i=*a;
	*a=*b;
	*b=i;
}
