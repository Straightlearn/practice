#include <stdio.h>

//Compiler version gcc  6.3.0

int main()

{
  char day;
  
  printf("Imp Note :");
  printf("\n\n\t\t1. ENTER ONLY FIRST LETTER OF DAY");
  printf("\n\n\t\t2. LETTER MUST BE UPPERCASE EXCEPT THURSDAY ");
  printf("\n\n\t 3. IN CASE OF TUESDAY AND THURSDAY FIRST");
  printf("\n\t LETTER ARE SAME THERE YOU MUST USE 't'");
  printf("\n\t FOR THURSDAY ");
  printf("\n\n_____________________________________________________________");
  printf("\n\n\t\tENTER A FIRST CHARACTER OF DAY ");
  printf("\n\t\tBETWEEN MONDAY - THURSDAY :");
  scanf("%c",&day);
  
 
  switch (day)
  
   {
     
     case 'M' : printf("\n THERE IS ELECTRONICS PRACTICAL ON MONDAY");
                   break;
                   
     case 'T' : printf("\n THERE IS COMPUTER 1 & 2 PRACTICAL ON TUESDAY"); 
                    break;
                    
     case 'W' : printf("\n THERE IS MATH 1 & 2 PRACTICAL ON WEDNESDAY ");
                      break;
                      
     case 't' : printf("\n THERE IS STATISTICS 1 & 2 PRACTICAL ON THURSDAY");
                    break;
                   
     default : printf("\nTHERE IS NO PRACTICAL ON %c\n",day);
      
     
   } 
   
   
   switch (day)
  
   {
      
     case 'M' : printf("\n\n\t\tTIME : 8:30 TO 11:30");
                   break;
                   
     case 'T' : printf("\n\n\t\tTIME : 8:30 TO 11:30"); 
                    break;
                    
     case 'W' : printf("\n\n\t\tTIME : 9:00 TO 11:00");
                      break;
                      
     case 't' : printf("\n\n\t\tTIME : 9:00 TO 11:00");
                    break;
      
     
   } 
  
  
  printf("\n\n\t\tTHANKS FOR USING MY SOFTWARE 👨‍💻😜");
   
   
  
  return 0;
  
}
