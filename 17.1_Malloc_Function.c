/*
#__ Malloc() Function __#

   -The name "malloc" stands for memory allocation.
   -The malloc() function allocates single block of requested memory.
   -malloc function is used to allocate space in memory during the execution of the program.
   -malloc function does not initialize the memory allocated during execution.It carries garbage value.
   -And, it returns a void pointer which can be casted into pointers of any form.
   -It returns NULL if memory is not sufficient.
   -Syntax :
        ptr = (castType*) malloc(number_of_element * size);

*/

//Initilize value
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*ptr;
    printf("Enter the number of element: ");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("Enter the Element %d : ",i+1);
        scanf("%d",(ptr+i));
    }

    printf("The Entered Values are : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
}


//Uninitilize value
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*ptr;
    printf("Enter the number of element: ");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));
    
    printf("The Entered Values are : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
}