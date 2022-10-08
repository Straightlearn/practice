#include <stdio.h>

int add(int a, int b); //function declaraion
/*
 * A function declaration defines the name and return type of a function in a program. Before using the function, we need to declare it outside of a main() function in a program
 *
 */


void main()  
{  
  
int sum;  
int a, b;  
printf(" Enter the first and second number \n");  
scanf("%d %d", &a, &b);  

sum = add(a, b); //(function call) call add() function
		   

printf( "The sum of the two number is %d\Zn", sum);  
}  
int add(int n1, int n2) /*(function definition) pass n1 and n2 parameter*/  
{  
int c;  
c = n1 + n2;  
return c;  
}  
