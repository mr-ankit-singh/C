/* 
#__ Variable in C __#

   -Variable is a constant which store a value.
   -It is a name which is given to a memory location where we store a value.
   -Rules for naming variable in c
       -First character must be an alphabet and underscore
       -No comma,no blank allowed
       -No special symbol other than underscore(_)
       -Variable name are case sensitive.
       -Blank spaces cannot be used in variable names.
       -C keywords cannot be used as variable names.
       -Variable type can be char, int, float, double, or void.

   -Deceleration of Variable
     Syntax:

         data_type variable_name1,variable_name2,.....variable_nameN;


Identifier__

   -The identifier is a user-defined word
   -It can be written in both lowercase and uppercase letters.
   -Its meaning is not defined in the c compiler.
   -It is a combination of alphanumeric characters.
   -It can contain the underscore character.
*/

#include<stdio.h>
void main()
{
    int a=4;
    float b=4.5;
    char c='o';
    printf("The value of a is %d\n",a);
    printf("The value of b id %f\n",b);
    printf("The value of c is %u\n",c);
}


