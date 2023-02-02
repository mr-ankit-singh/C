/*
#__ UnFormated Input and Output fuction in C __#

   -Unformatted I/O functions are used only for character data type or character array/string 
   -It cannot be used for any other datatype. 
   -These functions are used to read single input from the user at the console 
   -And it allows to display the value at the console.
   -These functions are called unformatted I/O functions because we cannot use 
     format specifiers in these functions 

#__ Unformatted Input functions __#

  getchar()🙋‍♂️
    -It accepts only one character type data from the keyboard.
    -This function reads one character at one time until and unless the enter key is pressed. 
    -This function is declared in stdio.h(header file)
    -Syntax: 
       Variable-name = getchar();

  getch()🙋‍♂️
    -It accepts only a single character from the keyboard. 
    -The character entered through getch() is not displayed on the screen (monitor).
    -This function is declared in conio.h(header file). 
    -getch() is also used for hold the screen.
    -Syntax:  
       getch(); 
       or 
       variable-name = getch();

  getche()🙋‍♂️
    -getche() function reads a single character from the keyboard by the user.
    -It displays it on the console screen and immediately returns without pressing the enter key. 
    -This function is declared in conio.h(header file).
    -Syntax:
       getche(); 
       or 
       variable_name = getche();

  gets()🙋‍♂️
    -Accepts any line of a string including spaces from the standard Input device (keyboard). 
    -This stops reading characters from the keyboard only when the enter key is pressed.
    -Format specifier = %s 
    -Syntax:
       char str[length of string in number];
       gets(str); 

*/

// getchar
#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("Enter any character: ");
    // Reads a character and displays on screen
    ch = getchar();
    printf("You Entered %c",ch);
}

// getch
#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("Enter any character: \n");
    // Reads a character but not displays on screen
    ch = getch();
    printf("You Entered %c",ch);
}

// getche()
#include <conio.h>
#include <stdio.h>
int main()
{
    char ch;
	printf("Enter any character: ");
	// Reads a character and displays immediately
	ch = getche();
    printf("\nYou Entered %c",ch);
	return 0;
}

//gets()
#include <conio.h>
#include <stdio.h>
int main()
{
	char name[50];
	printf("Please enter some texts: ");
	// Reading a line of character or a string
	gets(name);
	// Displaying this line of character or a string
	printf("You have entered: %s",name);
	return 0;
}
