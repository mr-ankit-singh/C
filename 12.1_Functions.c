/*
#__ Function In C __#

   -Functions are self-contained block of statements that perform a coherent task of some kind.
   -Functions are one way of delegating a piece of work.
    
   + Why we need function :-
       -To avoid rewriting the code for same task
       -To make program readable and understandable
       -To achive modular programming approach
       -To avoid complexity in debugging and testing

   + A function has
       -Function name
       -Return type
       -Parameter
       -Function body

   + A function has
       -Function Decleration
       -Function Call
       -Function Definition
       
*/
//Mtd : 1
#include<stdio.h>
int sum();
void main(){
    sum();
    sum();
}
int sum(){
    int a,b,sum=0;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("Sum=%d",sum);
}

//Mtd :2
#include<stdio.h> 
void add(int ,int);
void main()
{
    int a,  b;
    printf("Enter the value of a and b : \n");
    scanf("%d%d",&a,&b);
    add(a,b);
    
}
void add(int a , int b)
{
    int sum;
    sum = a+b;
    printf("Sum = %d",a+b);
}


/* Here the address of the variable is passed to the function as argument*/
// main me jo value hota hai uska copy function definition  me jata 
#include<stdio.h> 
void swap(int *a , int *b);
int main()
{
    int a ,b ;
    printf("Enter value of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("You entered %d and %d\n",a ,b);
    swap(&a,&b);
    printf("The value after swapping %d and %d\n",a,b);
    return 0;
}
void swap(int *a , int *b){

    int temp;
    temp = *a ;
    *a = *b ;
    *b = temp;
}
