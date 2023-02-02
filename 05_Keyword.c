/*
#__ Keywords in C __#

    -These are reserved word whose value are already known to the compiler.
    -It must be written in a lowercase letter.
    -There are 32 keywords available in c
    -Its meaning is pre-defined in the c compiler.	
    -You cannot use it as a variable name, constant name, etc.
    -It does not contain the underscore character.

    auto	   break	 case	    char	  const	   continue	  default	 do
    double	   else	     enum	    extern	  float	    for	       goto	     if
    int	       long	    register	return	  short	   signed	  sizeof	 static
    struct	 switch	    typedef	    union	 unsigned	void	  volatile	 while


List of format specifier in C

    Format Specifier	Description
      %d & %i           Integer Format Specifier
        %f	            Float Format Specifier
        %c	            Character Format Specifier
        %s	            String Format Specifier
        %u	            Unsigned Integer Format Specifier
        %ld	            Long Int Format Specifier
        %o	            octal unsigned integer
      %x & %X	        Hexadecimal unsigned integer [x-{a,b...z},X={A,B...Z}]
        %p	            Used to print the address in a hexadecimal form.
      %e/%E	            Used for scientific notation. It is also known as Mantissa or Exponent.
*/

#include<stdio.h>
int main()  
{  
  int y=0xA;  
  printf("Hexadecimal value of y is: %x", y);  
  printf("\nHexadecimal value of y is: %X",y);  
  printf("\nInteger value of y is: %d",y);  
  return 0;  
}  