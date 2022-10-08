#include <stdio.h>
/* this program is showing function call by value as 
 *  as well as explaining array.
 *  in this program the array values are passed into 
 *  the function when it is called.
 *  And then the the function prints the value through
 *  the help of printf()  function.
 *  we should note that the 'i' variable is used as 
 * a general subscript of the array 'arr', and which
 * is a normal convention or practice .
 */
 
int display(int i, int k); // function declaration.
int main()
{
	int arr[]={ 7, 8 ,9 ,10};
	int i; 
	printf("for the array arr\[\]=\{7,8,9, 10\}\n");

	for(i=0;i<=3;i++) 
	
	display( i ,arr[i]); //function calling
}

 int display(int i, int k) //function definition
 {
 	printf("\nThe number[%d] of the array is [%d]\n",i,k);
 return 0;
 }
