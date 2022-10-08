#include <stdio.h>

int main()
{
    int pec[]={4,6,3,9,2};
    int i=0;

    while(i<=4)
   {
     printf("address of %d is %u",i,&pec[i]);
     printf("  value of %d is %d\n" , i,pec[i]);
     i++;
   }
    printf("\n");
}
