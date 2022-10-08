#include <stdio.h>  
int main()  
{  
int x = 10, y = 20;  
printf (" x = %d, y = %d from main before calling the function", x, y);  
CallValue(x, y);  
printf( "\n x = %d, y = %d from main after calling the function", x, y);  
}  
int CallValue( int x, int y)  
{  
x = x + 5;  
y = y + 5;  
printf (" \nx = %d, y = %d from modular function", x, y);  
}   
