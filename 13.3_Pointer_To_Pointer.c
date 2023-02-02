/*
#__ Pointer to Pointer (Double Pointer) __#

   - The first pointer is used to store the address of another pointer is known as double pointer.
   - It occcupy same amount of memory stack as a normal pointe.

   - Syntax:
        data_type **name_of_variable = &normal_pointer_variable;

*/

#include<stdio.h>
void main(){
    int a =10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("a=%d %d %d %d",a,*p,**q,***r);

}

/*----------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
    int num=123;

    //A normal pointer pr2
    int *pr2;

    //This pointer pr2 is a double pointer
    int **pr1;

    /* Assigning the address of variable num to the pointer pr2 */
    pr2 = '#' ;

    /* Assigning the address of pointer pr2 to the pointer-to-pointer pr1 */
    pr1 = &pr2;

    /* Possible ways to find value of variable num*/
    printf("\n Value of num is: %d", num);
    printf("\n Value of num using pr2 is: %d", *pr2);
    printf("\n Value of num using pr1 is: %d", **pr1);

    /*Possible ways to find address of num*/
    printf("\n Address of num is: %p", &num);
    printf("\n Address of num using pr2 is: %p", pr2);
    printf("\n Address of num using pr1 is: %p", *pr1);

    /*Find value of pointer*/
    printf("\n Value of Pointer pr2 is: %p", pr2);
    printf("\n Value of Pointer pr2 using pr1 is: %p", *pr1);

    /*Ways to find address of pointer*/
    printf("\n Address of Pointer pr2 is:%p",&pr2);
    printf("\n Address of Pointer pr2 using pr1 is:%p",pr1);

    /*Double pointer value and address*/
    printf("\n Value of Pointer pr1 is:%p",pr1);
    printf("\n Address of Pointer pr1 is:%p",&pr1);
    return 0;
}