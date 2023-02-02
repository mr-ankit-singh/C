/*
#__ Write into a File __#

  fputc() Function
    -The fputc() function is used to write a single character into file.
    -This function is used for writing a single character in a stream
    -Syntax:
        fputc( character , FILE * stream );

  fputs() Function
    -C fputs function is implemented in file related programs for writing string to any particular file.
    -Syntax:
        fputs(const char *str, FILE *stream)

  fprintf() Fumction
    -C fprintf function pass arguments according to the specified format to the file indicated by the stream. 
    -This function is implemented in file related programs for writing formatted data in any file.
    -Syntax:
        fprintf(FILE *stream, const char *format, .argument)

*/

//Write a character
#include<stdio.h>
int main (void)
{
    FILE * fileName;
    char ch ='A';
    fileName = fopen("anything.txt","wt");
    fputc (ch , fileName);
    fclose (fileName);
    return 0;
}


//Write a string
#include<stdio.h>
int main (void)
{
    FILE * fileName;
    char ch[10] ="AnkitSingh";
    fileName = fopen("fileName.txt","wt");
    fputs(ch , fileName);
    fclose (fileName);
    return 0;
}

#include<stdio.h> 
int main()
{
    FILE *fp;
    fp = fopen("fileName.txt","w");

    fputs("This is a sample text file.", fp);
    fputs("This file contains some sample text data.", fp);

    fclose(fp);
    return 0; 
}

//Formatted writing
#include<stdio.h>
int main (void) 
{
   FILE *fileName;
   fileName = fopen("fileName.txt","w");
   fprintf(fileName, "%s %s %d", "Welcome", "to",  2022);
   fclose(fileName);
   return(0);
}
