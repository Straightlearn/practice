#include <stdio.h>

//Compiler version gcc  6.3.0

int main()

{
  
  int amount,rem,tem,nu = 0;
 
  
  printf("ENTER AMOUNT:");
  scanf("%d",&amount);
  
 while (amount != 0)
 
 {
   
   rem = amount % 10;
   tem = tem * 10 + rem;
   amount = amount / 10;
  
 }
 
  
  while(tem != 0)
  
  {
    nu = tem % 10;
    
   switch(nu)
   
   {
   
   case 1 : printf("\tOne");
            break;
            
   case 2 : printf("\tTwo");
            break;
            
   case 3 : printf("\tTree");
            break;
            
   case 4 : printf("\tFour");
            break;
            
   case 5 : printf("\tFive");
            break;
            
   case 6 : printf("\tSix");
            break;
            
   case 7 : printf("\tSeven");
            break;
            
   case 8 : printf("\tEight");
            break;
            
   case 9 : printf("\tNine");
            break;     
    
   } 
   
   tem = tem / 10;
    
  }
  

  
  
  return 0;
  
}
