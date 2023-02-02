/*
#__ Operator's  In C __#

   -Operators are symbols that are used to perform mathematical or logical manipulations.
   -An operator is a symbol that operates on a value or a variable. 

   a)Arithmetic Operators

      +  : Addition
      -  : Subtraction
      *  : Multiplication
      /  : Division
      %  : Modulus
      ++ : Increment
      -- : Decrement

   Note : Modulo operator is used only with integer value.

   b)Relational Operators
    
      ==   !=   >   >=   <   <=

   c)Logical Operators

      && : Logical AND
      || : Logical OR
      !  : Logical NOT

   d)Bitwise Operators
     -These operator ae used to perform operation at bit level.

      &  : Bitwise AND
      |  : Bitwise OR
      ^  : Bitwide XOR
      ~  : One's Complement
      >> : Right Shift
      << : Left shift

   e)Assignment Operators

      =   +=   -=   *=   /*   %=   >>=   <<=   &=   |=   ^=

   f)Misc Operators

      sizeof()	- Returns the size of a variable.
      &	    - Returns the address of a variable.
      *	    - Pointer to a variable.
      ? :	    - Conditional Expression.
       
*/

/* Increment and decrement operator
  -Increment and Decrement Operators are useful operators generally used to minimize the calculation, 
  -i.e. ++x and x++ means x=x+1 or -x and x−− means x=x-1. 
  -But there is a slight difference between ++ or −− written before or after the operand. 
  -Applying the pre-increment first add one to the operand and then the result is assigned to the 
    variable on the left whereas post-increment first assigns the value to the variable on the left 
    and then increment the operand.
*/
#include <stdio.h>
void main()
{
    //set a and b both equal to 5.
    int a=5, b=5;
    //Print them and decrementing each time.
    //Use postfix mode for a and prefix mode for b.
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
}

// Imp : Comma operator
#include <stdio.h>
void main() 
{
   int a =(10,20);
   printf("The value of a is %d ", a);
}

#include <stdio.h>
void main() 
{
   int a =(printf("Ankit\n"),20);
   printf("The value of a is %d ", a);
}

#include <stdio.h>
void main() 
{
   int a =10,20;  // <-- Give Error
   printf("The value of a is %d ", a);
}