#include <stdio.h>
#include <stdlib.h>

#define FNAME "filename.txt"

int writeFile( char *pBuffer );

int g_Ret = 0;

int writeFile( char *pBuffer )
{
   if ( !pBuffer )
   {
       puts( "Invalid param" );
       return -1;
   }
   FILE *fptr;
   fptr = fopen(FNAME, "w");
   if(fptr == NULL)
   {
      printf("Error!");
      return -1;  
   }
   
   fprintf(fptr,"%s", pBuffer);
   fclose(fptr);
   
   return 0;    
}

int main()
{
   //char *pBuffer="to write on text file";
   char *pBuffer = NULL;
   g_Ret = writeFile( pBuffer );
   return g_Ret;
}
