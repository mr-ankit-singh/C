/*
#__ Pointers in C __#

   - Variables that stores the address of another variable.
   - A variable that points to the storage/memory address of another variable.

   - Syntax:
        data-type *ptr;     // Declearation of pointer
        ptr = &(variable)  // Initilization of pointer

   - Format specifier for printing pointer address is ' %u '.
   - The address of operator / Referencing operator (&)
        It is used to obtain the address the of another variable.
   - The value at address operator / indirection operator / Dereferencing operator(*) 
        It is used to obtain the value present at a given memory address.
   
   -Types of Functon Calls
        Call by value
        Call by Reference

   
*/

//print the value and address of variable
#include <stdio.h>
int main()
{
   int num = 10;
   printf("Value of variable num is: %d", num);
   //To print the address of a variable we use %p
   printf("\nAddress of variable num is: %p", &num);
   return 0;
}

//print value of variable using var name and pointer
#include <stdio.h>
int main()
{
   int num = 10;
   int *p;
   p = &num ;
   printf("Value of num=%d {using variable}",num);
   printf("\nValue of num=%d {using pointer variable}",*p);
   printf ("\nValue of num is: %d", *(&num));
   printf("\nAddress of variable num is: %p", p);
   printf("\nAddress of variable num is: %p", &num);
   printf("\nAddress of pointer p is: %p", &p);
   return 0;
}