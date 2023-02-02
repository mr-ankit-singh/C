/*
#__ Dangling pointer __# 
   - A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. 
   - A dangling pointer is a pointer that occurs at the time when the object is de-allocated from memory without modifying the value of the pointer.
   - It points to the deleted object.
   - It usually occurs at the object destruction time.
   - Dangling pointer errors can only be avoided just by initializing the pointer to one NULL value.
   - The dangling pointer will be with a free() function in C.

   + There are three different ways where Pointer acts as a dangling pointer:
        - By deallocating memory
        - Function Call
        - When the variable goes out of scope.

*/

// Deallocating a memory pointed by ptr causes dangling pointer
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *ptr = (int *)malloc(sizeof(int));

	// After below free call, ptr becomes a
	// dangling pointer
	free(ptr);
	
	// No more dangling pointer
	ptr = NULL;
}

/*----------------------------------------------------------------------*/
// The pointer pointing to local variable becomes
// dangling when local variable is not static.
#include<stdio.h>

int *fun()
{
	// x is local variable and goes out of
	// scope after an execution of fun() is over.
	int x = 5;

	return &x;
}
int main()
{
	int *p = fun();
	fflush(stdin);

	// p points to something which is not valid anymore
	printf("%d", *p);
	return 0;
}

/*------------------------------------------------------------------------*/

// Creating Dangling Pointer by Variable goes out of scope.
#include<stdio.h>
void main()
{
    int *ptr;
    //Variable scope started
    {
        int ch;
        ptr = &ch;
    }
    //Variable scope ended
    // Now ptr is dangling pointer
    printf ("%d", *ptr);
    return 0;
}