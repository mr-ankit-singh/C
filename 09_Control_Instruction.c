/*
#__ Types of Control Instruction __#

   a)The Decision Control Structure
   b)The loop control structure
   c)The case control structure

 Decision control structure__🙋‍♂️

    👉 If Statement
        syntax:
            if(condition){
                statements...
            }

    👉 If Else statement
        syntax:
            if(condition){
                statements...
            }
            else{
                statements...
            }

    👉 Nested If else statement
        syntax:
            if(condition){
                statements...
            }
            else if(condition){
                statements...
            }
            else{
                statements...
            }
       
    👉 Conditional operator(ternary operator)
        Syntax:
            condition ? statement1 : statement2



 Loop control structure__🙋‍♂️

    👉 for loop
        Syntax: 
            for(intialization ; condition ; increment/decrement)

    👉 while loop
        Syntax:
            while(condition){
                statements...
            }

    👉 do while loop
        Syntax:
            do{
                statements..
            }while(condition);


 Case Control Structure__🙋‍♂️

    👉 switch
        Syntax:
            switch(expression){
                case lable 1:
                    statements...
                    break;
                case lable 2:
                    statements...
                    break;
                case lable n:
                    statements...
                    break;
                default:
                    statements...
                    break;
            }

    👉 break
         break is used to terminate the while ,switch case and for loops for the sunsequent execution.

    👉 continue

    👉 goto
         goto statements is used to transfer the control of a program to the specified lable in the program
         Syntax:
            lable:
                statements...
            {
                goto lable;
            }

*/
#include<stdio.h>
void main(){
    for(int i=1;i<=10;i++){
        printf("* ");
    }
}

#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }
}
