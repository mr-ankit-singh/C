/*
#__ Strings in C __#

   -A string is a sequence of characters terminated with a null character \0.
   -In C programming, the one-dimensional array of characters are called strings.
   -Syntax :
     ● Declaration
          char varname[size];
     ● Initialization
          char varname[] = "abcd";
          char varname[50] = "abcd";
          char varname[] = {'a', 'b', 'c', 'd', '\0'};
          char varname[5] = {'a', 'b', 'c', 'd', '\0'};

   -Format Specifier: %s
   -The compiler doesn't perform bounds checking on the character array.
*/

//Using scanf
#include<stdio.h>
void main(){
    char arr[10];
    printf("Enter string");
    scanf("%s",arr);
    printf("%s",arr);
}
//drawback of scanf : cannot print after whitespace

//using gets()
#include<stdio.h>
#include<conio.h>
void main(){
    char arr[10];
    printf("Enter string: ");
    gets(arr);
    puts(arr);
    printf("%s",arr);
}

//Problem with both scanf and gets is buffer overflow

// Print only specified character
#include<stdio.h>
#include<conio.h>
void main(){
    char arr[10];
    printf("Enter string: ");
    gets(arr);
    
    printf("%.3s",arr);
    printf("%10.3s",arr);
}