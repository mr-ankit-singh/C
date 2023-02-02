/*
#__ Opening a file __#

   -fopen() function used to open an existing file or create a new file.
   -fopen() function defined in the stdio.h header file.

   -Syntax:
        FILE *fopen( const char * filePath, const char * mode );

       Parameter:
           filePath: The first argument is a pointer to a string containing the name of the file to be opened.
           mode: The second argument is an access mode.
               r   r+
               w   w+
               a   a+

  NOTE: C fopen function returns NULL in case of a failure and returns a FILE stream pointer on success.

*/

#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("fileName.txt","w");
    return 0; 
}