#include <stdio.h> 
#include <stdlib.h> 
int main () 
{ 
// declaration of the character type variable 
char ch; 
printf(" Enter the character: "); 
scanf (" %c", &ch); 

// use if statement to check the condition 
if ( ch == 'Y') 
{ 
    printf(" Great, you did it. "); 
    exit(EXIT_SUCCESS); // use exit() function to terminate the execution of a program 
} 
else
{
    printf (" You entered wrong character!! ");
}
return 0;
}
