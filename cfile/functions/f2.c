#include <stdio.h>  
int add(int a, int b);   
void main()  
{  
  
int area;  
int h, b;  
printf("\n Enter the breadth of traingle:  ");
scanf("%d", &h);  
printf("\nEnter the heigth of triangle:  ");
scanf("%d", &b);

area = add(h, b); 

printf( "The area of the two number is %d\n", area);  
}  
int add(int n1, int n2) 
{  
int c;  
c = (n1 *n2)/2;
return c;  
}  
