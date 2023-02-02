/*
#__ DataTypes in C __#

   -A data type specifies the type of data that a variable can store.
   -It tells how much storage/memory to be allocated to a variable.

Types of DataType__

   Types	                  Data Types
   Primary Data Type	      int, char, float, double
   Derived Data Type	      array, pointer, structure, union
   Enumeration Data Type	enum , typedef
   Void Data Type	         void
*/
/*
 According to 32-bit architecture

   Data Types	          Memory Size	    Range
   char	                1 byte	        −128 to 127
   signed char	          1 byte	        −128 to 127
   unsigned char	       1 byte	        0 to 255
   short	                2 byte	        −32,768 to 32,767
   signed short 	       2 byte	        −32,768 to 32,767
   unsigned short	       2 byte	        0 to 65,535
   
   int	                2 byte	        −32,768 to 32,767
   signed int	          2 byte	        −32,768 to 32,767
   unsigned int	       2 byte	        0 to 65,535
   short int	          2 byte	        −32,768 to 32,767
   signed short int	    2 byte	        −32,768 to 32,767
   unsigned short int	 2 byte	        0 to 65,535
   long int	             4 byte	        -2,147,483,648 to 2,147,483,647
   signed long int	    4 byte	        -2,147,483,648 to 2,147,483,647
   unsigned long int	    4 byte	        0 to 4,294,967,295
   
   float	                4 byte	        -3.4e38 to +3.4e38
   double	             8 byte	        1.7E-308 to 1.7E+308
   long double	          10 byte	        3.4E-4932 to 1.1E+4932
*/
/*

   Format Specifier	   Description
   %d or %i             Integer 
   %f	                  Float 
   %c	                  Character 
   %s	                  String 
   %u	                  Unsigned Integer 
   %lu	               Unsigned Long Integer 
   %ld	               Long Int 
   %o                   Unsigned Octal number for integer
   %x or %X             Unsigned Hexadecimal for integer
   %lf                  Double floating-point number
   %Lf                  Long Double
   %lld                 long long int
*/

#include <stdio.h>      
int main() {
  int a;
  short aa;
  float bb;
  long b;
  long long c;
  long double d;

  printf("size of int = %d bytes\n", sizeof(a));
  printf("size of short = %d bytes\n", sizeof(aa));
  printf("size of float = %d bytes\n", sizeof(bb));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}