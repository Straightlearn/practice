#include <stdio.h>  
/* function call by reference
 */

int main()  
{  
int x = 10, y = 20;  
printf (" x = %d, y = %d from main before calling the function", x, y);  
CallValue (&x, &y);  
printf( "\n x = %d, y = %d from main after calling the function", x, y);  
}  
int CallValue( int *a, int *b)// call reference
{  
*a = *a + 5;  
*b = *b + 5;  
printf (" \nx = %d, y = %d from modular function", *a, *b);  
}  
