/*
#__ Void Pointer __#

   - A pointer to void means a generic pointer that can point to any data type.
   - A void pointer is a pointer that has no associated data type with it. 
   - A void pointer can hold address of any type and can be typcasted to any type.
   - Syntax :
        void *pointer_name;

   - The size of the void pointer in C is the same as the size of the pointer of character type.
   - We use void pointers because of its reusability. 
   - Void pointers can store the object of any type, 
   - And we can retrieve the object of any type by using the indirection operator with proper typecasting

   + Advantage: The malloc() and calloc() function return the void pointer, 
   + so these functions can be used to allocate the memory of any data type.

   ! Some important points
      - The void pointer in C cannot be dereferenced directly.
      - We cannot apply the arithmetic operations on void pointers in C directly. 
      - We need to apply the proper typecasting so that we can perform the arithmetic operations on the void pointers.
      - 
*/

// Let us consider some examples:
#include<stdio.h>
void main(){
    
    int i=9;        // integer variable initialization.
    int *p;         // integer pointer declaration.
    float *fp;      // floating pointer declaration.
    void *ptr;      // void pointer declaration.

    p=fp;           // incorrect.
    fp=&i;          // incorrect
    ptr=p;          // correct
    ptr=fp;         // correct
    ptr=&i;         // correct
}

/*----------------------------------------------------------------------*/
#include <stdio.h>  
int main()  
{  
    void *ptr = NULL;   //void pointer  
    int *p  = NULL;     // integer pointer  
    char *cp = NULL;    //character pointer  
    float *fp = NULL;   //float pointer 

    //size of void pointer  
    printf("size of void pointer = %d\n\n",sizeof(ptr)); 

    //size of integer pointer  
    printf("size of integer pointer = %d\n\n",sizeof(p));
    
    //size of character pointer  
    printf("size of character pointer = %d\n\n",sizeof(cp)); 

    //size of float pointer  
    printf("size of float pointer = %d\n\n",sizeof(fp)); 

    return 0;  
}  

/*-----------------------------------------------------------------------------*/
#include <stdio.h>  
#include<malloc.h>  
int main()  
{  
   int a=90;  
   
   int *x = (int*)malloc(sizeof(int)) ;  
   x=&a;  
   printf("Value which is pointed by x pointer : %d",*x);  
   return 0;  
}  