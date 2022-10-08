#include <stdio.h>
#include <unistd.h>

int main()  {   
 int n,i; char a[100];
 printf("How many hearts do you want to print?");    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
  printf("  ****   ****\n");
 if(i%2==0)
printf(" **💜** **💜**\n");
    else
printf(" **💙** **💙**\n");
printf(" *************\n");
    if(i%2==0)
printf("  **💖***💖**\n");
  else
 printf("  **💛***💛**\n");
 printf("    *******\n");
 printf("       *\n");
 printf("  I LOVE YOU!\n\n\n");
 sleep(1);
 }
 sleep(2);
 }

