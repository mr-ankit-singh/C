/*
#__ Enum or Enumeration __#

   - It is a special kind of data type defined by the user.
   - To define enum , enum keyword is used.
   - It is mainly used to assing names to integral Constants.
   - And the names makes a program easy to read and maintain.
   - Syntax: 
        enum variable_name {const1=value, const2=value, const3=value};

*/

#include<stdio.h>
enum ABC{ A, B, C };
int main ()
{
    enum ABC x;
    x = A + B + C;
    printf ("\n x = %d", x);
    printf ("\n %d %d %d", A, B, C);
    return 0;
}

/*-----------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
enum month { Jan = 1, Feb, Mar };
int main ()
{
    enum month April;
    April = Mar + 1;
    printf ("\n %d %d ", Feb, April);
    getch ();
    return 0;
}

/*----------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
typedef enum ABC { A = 40, B, X = 50, Y } XYZ;
int main ()
{
    enum ABC C;
    XYZ Z;
    C = B + 1;
    Z = Y + 1;
    printf ("\n C = %d Z = %d", C, Z);
    printf ("\n B = %d Y = %d", B, Y);
    getch ();
    return 0;
}