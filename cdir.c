#include <dirent.h>
#include <errno.h>

typedef enum { false, true } bool;

bool checkDir( char* pDirName );

/*
#
# ============================================================================
# Main function
# ============================================================================
*/

int main() 
{
   if ( checkDir("/home/walldurate") ) { puts( "true" ); }
   else{ puts( "false" ); }
//   Connected();
   return 0;

}
/*
#
# ============================================================================
# Check if Directory exist
# ============================================================================
*/
bool checkDir( char* pDirName )
{
  if ( !pDirName )
  {
    return false;
  }
  DIR* pDir = opendir( pDirName );
  
  if (pDir)
  {
     /* Directory exists. */
     closedir(pDir);
     return true;
  } 
//  else if (ENOENT == errno) 
//  {
      /* Directory does not exist. */
//  }
  else 
  {
    return false;
      /* opendir() failed for some other reason. */
  }
}
