#include <stdio.h>


int main()
{
    int num[]={24,34,12,44,56,17};
    int i = 0;

    while(i<= 5)
    {
     printf("\nelements no: %d" , i);
     printf(" address %u", &num[i]);
     printf("  value %d", num[i]);
     i++;// incrementing i to point to the other 
	 // elements in the array.
    }
    printf("\n");
}
