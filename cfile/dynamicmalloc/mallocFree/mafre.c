#include <stdio.h>
#include <stdlib.h>
/* malloc is a very use for way to get rid of 
 * segmentation fault
 */
int m(int a, int b, int c)
{
 return a * b * c ;
}

int main()
{
	int *t;
	int a=6,b=7,c=8;
	int sum;
	t=malloc(sizeof(int)*3);/* if you dont
				    do this your 
				    will get a
				    segmentation 
				    fault when u
				    run the 
				    program*/
	int sum2;

	t[0]= a;
	t[1]= b;
	t[2]= c;

	sum= t[0] + t[1] + t[2] ;
	printf(" %i \n", sum);
	sum2= m(t[0],t[1],t[2]);
	printf(" %i\n",sum2);
	return (0);
}

