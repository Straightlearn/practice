#include <stdio.h>
/* This project is used to show how pointers work
 *
 *
 *
 */

int main()
{
	double area;
	int  b, h;
	area = (b*h)/2;
	double *p ;
	
	p= &area;
	
	 printf("\nenter bredth of triangle ");
	 scanf("%d", &b);
	 printf("\nenter height of triangle ");
	 scanf("%d", &h);
	 printf("area of traingle b[%d] , h[%d] ",b,h);
	 printf("= %d\n", *p);
	 printf("area of triangle is %d\n  ", area);
}
