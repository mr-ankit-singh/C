/*
#__ Closing a File __#

   -fclose() function is used to releases the memory stream, opened by fopen() function.
   -The file (both text and binary) should be closed after reading/writing.
   -Syntax:
        fclose( FILE * stream );

  Note:C fclose returns EOF in case of failure and returns 0 on success

*/

#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("fileName.txt","r");
    fclose(fp);
    return 0; 
}