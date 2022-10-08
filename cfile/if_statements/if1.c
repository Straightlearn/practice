#include <stdio.h>
#include <string.h>

int main()
{
   char Capital[50]= "abujah";
   char  a[50];
    printf("what is the capital of Nigeria\n");
    strcpy("%s",&a);

    if(a==Capital)
    {
      printf("you made it !\n");
    }
    else
    {
      printf("oops! not it");
    }
}
