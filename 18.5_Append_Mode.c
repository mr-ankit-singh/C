/*
#__ Append into a File __#

   -
*/

#include<stdio.h>
int main (void)
{
    FILE * fp;
    char str[50] ="LosAngelis";
    fp = fopen("fileName.txt","a");
    printf("After Appending\n");
    fgets(str,10,fp);
    printf("Before Appending\n");
    fputs(str , fp);
    fgets(str,10,fp);
    fclose (fp);
    return 0;
}
