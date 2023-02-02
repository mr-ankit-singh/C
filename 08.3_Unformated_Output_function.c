/*
#__ Unformatted Output functions in C __#

  putchar()🙋‍♂️
    -This displays one character at a time to the monitor.
    - This function is declared in stdio.h(header file) 
    -Syntax: 
       putchar(variable_name);  

  putch()🙋‍♂️
    -putch() function is used to display a single character which is given by the user 
    -and that character prints at the current cursor location. 
    -This function is declared in conio.h(header file)
    -Syntax:     
       putch(variable_name);  

  puts()🙋‍♂️
    -It is used to display a group of characters or strings which is already stored in a character array. 
    -This function is declared in stdio.h(header file).
    -Syntax:  
       puts(identifier_name );

*/

//putchar()
#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	// Reads a character
	ch = getchar();
	// Displays that character
	putchar(ch);
	return 0;
}

#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	// Reads a character
	ch = getchar();
	// Displays that character
	putchar(ch);
    printf("\nYou entered ",putchar(ch));
	return 0;
}

//putch()
#include <conio.h>
#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character:\n ");
	// Reads a character from the keyboard
	ch = getch();
	printf("\nEntered character is: ");
	// Displays that character on the console
	putch(ch);
	return 0;
}

//puts() function
#include <stdio.h>
int main()
{
	char name[50];
	printf("Enter your text: ");
	// Reads string from user
	gets(name);
	printf("Your text is: ");
	// Displays string
	puts(name);
	return 0;
}
