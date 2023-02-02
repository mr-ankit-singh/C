/*
#__ Null Pointer __#

   - A Null Pointer is a pointer that does not point to any memory location. 
   - It stores the base address of the segment.
   - The null pointer basically stores the Null value.
   - while void is the type of the pointer.
   - Here, Null means that the pointer is referring to the 0th memory location.
   -  When a NULL value is assigned to the pointer, then it is considered as a Null pointer.

   + Following are the applications of a Null pointer:
       - It is used to initialize o pointer variable when the pointer does not point to a valid memory address.
       - It is used to perform error handling with pointers before dereferencing the pointers.
       - It is passed as a function argument and to return from a function when we do not want to pass the actual memory address.

*/

// Example of Null Pointer
#include<stdio.h>
void main(){

    int *ptr=(int *)0;
    float *ptr=(float *)0;
    char *ptr=(char *)0;
    double *ptr=(double *)0;
    char *ptr='\0';
    int *ptr=NULL;

    return 0;
}

// When we use the malloc() function.
#include <stdio.h>  
int main()  
{  
    int *ptr; 

    ptr=(int*)malloc(4*sizeof(int));  
    
    if(ptr==NULL) {  
        printf("Memory is not allocated");  
    }  
    else {  
        printf("Memory is allocated");  
    } 

    return 0;  
}  