
// malloc, then frees the memory with free.

#include <stdlib.h> 
#include <stdio.h>


int main( void )
{
   char *string;

   // Allocate space for a path name
   string = malloc(sizeof(char)*50);

   // In a C++ file, explicitly cast malloc's return.  For example,
   // string = (char *)malloc( _MAX_PATH );

   if( string == NULL )
      printf( "Insufficient memory available\n" );
   else
   {
      printf( "Memory space allocated for path name\n" );
      free( string );
      printf( "Memory freed\n" );
   }
}
