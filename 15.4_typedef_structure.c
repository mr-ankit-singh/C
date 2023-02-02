/*
#__ Structure using typedef __#

   -typedef: The typedef is used to give data type a new name. 
   -The typedef is a keyword used in C programming to provide some meaningful names to the already existing variable in the C program. 
   -It behaves similarly as we define the alias for the commands. 
   -In short, we can say that this keyword is used to redefine the name of an already existing variable.
   -Syntax:
        typedef <existing_name> <alias_name>  

*/

#include<stdio.h>
typedef struct Student{
    int rollNo;
    char name[20];
    float marks;
}Students;
void main(){
    Students std1={01,"AnkitSingh",99.99};
    Students *ptr;
    ptr = &std1;
    printf("Student Detail\n");
    printf("RollNo : %d \nName : %s \nMarks : %f ",ptr->rollNo,ptr->name,ptr->marks);

}