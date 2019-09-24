/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define FNAME "logme.log"
#define MAX_SIZE 500

int logme( char *pBuffer );
void time_( char *pTime );

int g_Ret = 0;

void time_( char *pTime )
{
    if ( !pTime )
    {
        puts( "Invalid param" );
        return;
    }
	int hours, minutes, seconds, day, month, year;
	time_t now;
	
	// Obtain current time
	// time() returns the current time of the system as a time_t value
	time(&now);

	// Convert to local time format and print to stdout
	printf("Today is : %s", ctime(&now));

	// localtime converts a time_t value to calendar time and 
	// returns a pointer to a tm structure with its members 
	// filled with the corresponding values
	struct tm *local = localtime(&now);

    hours = local->tm_hour;      	// get hours since midnight (0-23)
    minutes = local->tm_min;     	// get minutes passed after the hour (0-59)
    seconds = local->tm_sec;     	// get seconds passed after minute (0-59)

    day = local->tm_mday;        	// get day of month (1 to 31)
    month = local->tm_mon + 1;   	// get month of year (0 to 11)
    year = local->tm_year + 1900;	// get year since 1900

	// print local time
	if (hours < 12)	// before midday
		printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);

   else	// after midday
   {      
		printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
      hours = hours -12;
   }
//   sprintf( pTime, "%02d%02d%d-%02d%02d%02d", day, month, year, hours, minutes, seconds );
   sprintf(pTime, "%s", ctime(&now));
}

int logme( char *pBuffer )
{
   if ( !pBuffer )
   {
       puts( "Invalid param" );
       return -1;
   }

    char achAux[MAX_SIZE];
    char achTime[50];
    time_(achTime);
    
    sprintf( achAux, "%s: %s", achTime, pBuffer );
    
    FILE *fptr;
    fptr = fopen(FNAME, "w");
    if(fptr == NULL)
    {
      printf("Error!");
      return -1;  
    }
   
    fprintf(fptr,"%s", achAux);
    fclose(fptr);
   
    return 0;   
}

int main()
{
   char *pBuffer="to write on text file";
   //char *pBuffer = NULL;
   g_Ret = logme( pBuffer );
   return g_Ret;
}
