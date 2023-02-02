/*
#__ Formated Input and Output Function in C __#

  scanf()🙋‍♂️ 
    -This function provides for formatted input for the keyboard
    -Syntax:
        scanf("format",&var1,&var2 ....);
   
  printf()🙋‍♂️
    -This function provides for formatted output on the screen
    -Syntax:
        printf("format",var1,var2 ....);
        
*/

#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    printf("Your number is %d",a);
}

// Set width of variable
#include<stdio.h>
void main(){
    int a;
    printf("Enter a number : \n");
    scanf("%3d",&a);
    printf("Your number is %d",a);
}