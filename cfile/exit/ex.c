#include <stdio.h>  
#include <stdlib.h>  
int main ()   
{  
// declaration of the variables  
int i, num;  
printf ( " Enter the last number: ");  
scanf ( " %d", &num);  
for ( i = 1; i<num; i++)  
{  
// use if statement to check the condition  
if ( i == 6 )  
  
/* use exit () statement with passing 0 argument to show termination of the program without any error message. */  
exit(0);    
  
else  
  
printf  (" \n Number is %d", i);  
}   
return 0;  
}  
