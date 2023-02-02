/*
#__ String handling functions __#

   -Functions that are used to perform operations on strings are known as string handling functions.
   -These functions are included in the string.h header file

    Function	  Description
    strlen()	  returns the length of string.
    strcpy()	  copies the contents of source string to destination string.
    strcat()	  To append/ add second string at the end of first string.
    strncat()     appends only the specified number of characters to the destination string.
    strcmp()	  compares two strings.If both strings are same, it returns 0.
    strncmp()     comparison is limited to the number of characters specified during the function call
    strrev()	  returns reverse string.
    strlwr()	  converts string to lowercase.
    strupr()	  converts string to uppercase

*/

//Length of String🙋‍♂️
#include <stdio.h>
#include<string.h>
int main() {
    char s[] = "Programming is fun";
    int i;
    //using loop
    for (i = 0; s[i] != '\0'; ++i);
    printf("Length of the string: %d\n", i);
    //using strlen()
    int l = strlen(s);
    printf("Length of the string: %d", l);
    return 0;
}


//Compare String🙋‍♂️
/*This function compares two strings based on ASCII value.
  Strcmp() returns value as 0 if both are equal otherwise non zero
  Return value
  strcmp(s1,s2) value is = 0 if s1==s2
                       > 0 if s1>s2 
                       < 0 if s1<s2 */
 
#include<stdio.h>
#include<string.h>
void main()
{
    char s[10],s1[10];
    int x;
    printf("enter string 1 ");
    gets(s);
    printf("enter string 2 ");
    gets(s1);
    printf("strings are\n");
    puts(s);
    puts(s1);
    x=strcmp(s,s1);
    printf("%d\n",x);
    if(x==0)
        printf("strings are equal");
    else
        if(x>0)
            printf("string1 is greater than string2");
        else
            printf("string1 is lesser than string2");
}
//without strcmp()
#include<stdio.h>
int main()
{
char str1[30], str2[30];
int i;
printf("\nEnter two strings :");
gets(str1);
gets(str2);
i = 0;
while (str1[i] == str2[i] && str1[i] != '\0')
    i++;
if (str1[i] > str2[i])
    printf("str1 > str2");
else if (str1[i] < str2[i])
    printf("str1 < str2");
else
    printf("str1 = str2");
return (0);
}
//Note:strncmp() comparison is limited to the number of characters specified during the function call.
//int strncmp(const char *str1, const char *str2, size_t n) n= number of characters that needs to be compared.
#include <stdio.h>
#include <string.h>
int main () {
   char str1[20];
   char str2[20];
   int result;
   //Assigning the value to the string str1
   strcpy(str1, "hello");
   //Assigning the value to the string str2
   strcpy(str2, "helLO WORLD");
   //This will compare the first 3 characters
   result = strncmp(str1, str2, 3);
   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }
   return 0;
}


//concatenate two strings🙋‍♂️
//using string handling functions
#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s1[10];
    int x;
    printf("Enter string 1: ");
    gets(s);
    printf("enter string 2: ");
    gets(s1);
    printf("strings are\n ");
    puts(s);
    puts(s1);
    strcat(s,s1);
    printf("After concatenation \n");
    puts(s);
}
//without using string handling functions.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s1[10];
    int x,lens,lens1;
    printf("Enter string 1: ");
    gets(s);
    printf("Enter string 2: ");
    gets(s1);
    printf("Before Concatination\n");
    puts(s);
    puts(s1);
    lens=strlen(s);
    lens1=strlen(s1);
    printf("The length of s = %d and s1 = %d \n",lens,lens1);
    for(int i=0;i<=lens1;i++){
        s[lens+i]=s1[i];
    }
    printf("After concatination\n ");
    puts(s);
    puts(s1);
}

//Note:strncat() appends only the specified number of characters to the destination string.
//strncat(destination,source,size)
#include <stdio.h>
#include <string.h>
int main () {
   char str1[50], str2[50];
   //destination string
   strcpy(str1, "This is my initial string");
   //source string
   strcpy(str2, ", add this");
   //displaying destination string
   printf("String after concatenation: %s\n", strncat(str1, str2, 5));
   // this should be same as return value of strncat()
   printf("Destination String str1: %s", str1);
   return 0;
}

//Reverse a string🙋‍♂️
//using string handling function
#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    printf("Enter string: ");
    gets(str);
    puts(str);
    strrev(str);
    printf("Reverse string\n");
    puts(str);
}
//without using string handling function
#include<stdio.h>
#include<string.h>
void main(){
    char str[10] ,temp;
    int len;
    printf("Enter string: ");
    gets(str);
    puts(str);
    len=strlen(str);
    for(int i=0;i<=len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("Reverse string\n");
    puts(str);
}
//or
#include<stdio.h>
#include<string.h>
main()
{
    char a[10],b[10];
    int n,i,j;
    printf("enter string1: ");
    gets(a);
    printf("before reverse string is: ");
    puts(a);
    n=strlen(a);
    for(i=n-1,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
    printf("string after reverse: ");
    printf("%s",b);
}