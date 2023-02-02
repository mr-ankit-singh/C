/*
#__ Calloc() Function __#

   -The name "calloc" stands for contiguous allocation.
   -The calloc() function allocates multiple block of requested memory.
   -Allocate multiple block of memory and each block is of same size.
   -It initially initialize all bytes to zero.
   -It returns NULL if memory is not sufficient.
   -Syntax:
        ptr = (castType*) calloc( number_of_element , size);

*/
//Initilize value
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*ptr;
    printf("Enter the number of element: ");
    scanf("%d",&n);

    ptr=(int *)calloc(n,sizeof(int));
    
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

    ptr=(int *)calloc(n,sizeof(int));
    
    printf("The Entered Values are : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
}