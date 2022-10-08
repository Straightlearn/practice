#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,c;
  for(c=1;c<=5;c++)
  {
    for(i=5;i>=c;i--)
    {
      printf("*");
    }
    printf("\n");
  }
  return(0);
}
