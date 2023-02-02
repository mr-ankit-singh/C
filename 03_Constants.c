/* 
#__ Constant in C  __#

   -An entity whose value does not change
   -Types of constants
    1)Numeric Constant
       -Integer constant (1,5,-8)
          Decimal(0,---,9)Base10
          HexaDecimal(0,---,9,A,---F)Base16
          Octal(0,---,7)Base8

       -Real constant(0.23,-56.45)

    2)Character constant
       -Single string constant('@' ,'a') 
          Ascii values
             A-Z : 65-90
             a-z : 97-122
             0-9 : 48-57
             Special character : 0-47 , 58-64 ,91-96

       -String Constant("ankit" , "@" , "a")

*//*
    Constant	                      Example
    Decimal Constant	              10, 20, 450 etc.
    Real or Floating-point Constant	  10.3, 20.2, 450.6 etc.
    Octal Constant	                  021, 033, 046 etc.
    Hexadecimal Constant	          0x2a, 0x7b, 0xaa etc.
    Character Constant	              'a', 'b', 'x' etc.
    String Constant	                  "c", "c program", "c in javatpoint" etc  */

/*
There are two ways to define constant in C programming.
    - const keyword
    - #define var_name value
*/

// Print the Ascii value and value of character constant
#include<stdio.h>
void main(){
    printf("The Ascii value character constant ['A'] is %d \n",'A');
    printf("The character value of integer [65] is %c ", 65);
}

// Declare using const keyword
#include<stdio.h>    
int main(){    
    const float PI=3.14;    
    printf("The value of PI is: %f",PI);    
    return 0;  
}     

// Using macro definition
#include<stdio.h>    
#define PI 3.14
int main(){       
    printf("The value of PI is: %f",PI);    
    return 0;  
}     

/* 
  Note:Rules for macro definition :-
  -No space between # and define
  -No semicolon(;) at last
  -space between var_name and value */