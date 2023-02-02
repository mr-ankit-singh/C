/*
#__ Pointers to structure / Structure Pointer __#

   -The structure pointer points to the address of a memory block where the Structure is being stored.
   -Syntax:
        struct structureName {
            dataType member1;
            dataType member2;
            ...
        };
        int main() {
            struct structureName variable1;
            struct structureName *ptr;
            ptr = &variable1;
        }

*/
#include<stdio.h>
struct Student{
    int rollNo;
    char name[20];
    float marks;
};
void main(){
    struct Student std1={01,"AnkitSingh",99.99};
    struct Student *ptr;
    ptr = &std1;
    printf("Student Detail\n");
    printf("RollNo : %d \nName : %s \nMarks : %f ",ptr->rollNo,ptr->name,ptr->marks);

}