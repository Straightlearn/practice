#include <stdio.h>
/*
 * This program is showing how pointers work 
 *
 */
int main()
{
	int a, *b , **c , ***d , ****e ;
	
	a = 10 ;
	b = &a ; 
	c = &b ;
	d = &c ;
	e = &d ;
	
	printf("value of a=%d b=%d c=%d d=%d e=%d\n", a, b , c , d , e);
	printf("address of  a=%u b=%u c=%u d=%u e=%u \n", &a ,b,c , d,e);
	printf("value of *b=%d  **c=%d  ***d=%d  ****e=%d\n", *b, **c, ***d, ****e);
	printf("\nvalue of  %d  %d  %d\n", a, a + *b, **c + ***d + ****e);
	
}
