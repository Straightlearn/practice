#include <stdio.h>

int main()
{
  int num[]={5,8,9,7,9};
  int i=0, *j;

  j = &num[0];// assign the address of the zeroth
	      // elementh

  while(i<=4)
  {
   printf("\naddress = %u", &num[i]);
   printf(" elements = %d", *j);
   i++;
   j++;//increment pointer to point to next 
       //location
  }
  printf("\n");
}


