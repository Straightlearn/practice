#include <stdio.h>

/* if you name your executable fubar, and call it with the command ./fubar a b c, it will print out the following text:

This program was called with "./fubar".
argv[1] = a
argv[2] = b
argv[3] = c

althogh in this case this executable is named 
acv1.c

*/

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}
