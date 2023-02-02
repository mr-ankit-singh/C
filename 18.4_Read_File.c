/*
#__ Read a File __#

    fgetc() Function 🙋‍♂️
      -fgetc() function is used to read a character from a file.
      -getc() function returns the next requested object from the stream on success.
      -Syntax:
          getc( FILE * stream );
      
      Note:The function feof() and ferror() to distinguish between end-of-file and error must be used.

    fgets() Function 🙋‍♂️
      -C fgets function is implemented in file related programs for reading strings from any particular file. 
      -It gets the strings 1 line each time.
      -Syntax:
          fgets(char *str, int n, FILE *stream)

      -On success, the function returns the same str parameter
      -C fgets function returns a NULL pointer in case of a failure.

    fscanf() Function 🙋‍♂️
      -C fscanf function reads formatted input from a file. 
      -This function is implemented in file related programs for reading formatted data from any file that is specified in the program.
      -Syntax:
          fscanf(FILE *stream, const char *format, ...)

      -Its return the number of variables that are assigned values, or EOF if no assignments could be made.
*/

//Read a character
#include<stdio.h>
int main()
{
  FILE *fp = NULL;
  char ch;
  fp = fopen("fileName.txt", "r");
  while(!feof(fp)){
    ch=fgetc(fp);
    printf("%c",ch);
  }
  return 0;
}


//Read a string
#include<stdio.h>
int main()
{
  FILE *fp = NULL;
  char str[10];
  fp = fopen("fileName.txt", "r");
  fgets(str,5,fp);
  printf("%s",str);
  return 0;
}

#include<stdio.h>
void main(void)
{
    FILE* fp;
    char ch[100];
    fp = fopen("fileName.txt", "r");
    printf("%s", fgets(ch, 50, fp));
    fclose(fp);
}


//Read formatted 
#include<stdio.h>
int main()
{
    char str1[10], str2[10];
    int yr;
    FILE* fp;
    fp = fopen("fileName.txt", "w+");
    fputs("Welcome to", fp);
    rewind(fp);
    fscanf(fp, "%s %s %d", str1, str2, &yr);
    printf("----------------------------------------------- \n");
    printf("1st word %s \t", str1);
    printf("2nd word  %s \t", str2);
    printf("Year-Name  %d \t", yr);
    fclose(fp);
    return (0);
}