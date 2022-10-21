#include <stdio.h>

int main()
{
	int array[]={ 33,56,90};
	int *array_ptr;
	array_ptr=array;
	
/*accessing the elements of the array using  the array
 *pointer and the increment operator.
 */
printf(" first element: %i\n", *(array_ptr++));
printf("second element: %i\n", *(array_ptr++));
printf(" third element: %i\n\n", *(array_ptr++));

/*accessing elements of the array using
 *with the array variable name
 */
printf(" first element: %i\n", array[0]);
printf("second element: %i\n", array[1]);
printf(" third element: %i\n", array[2]);
return (0);
}
