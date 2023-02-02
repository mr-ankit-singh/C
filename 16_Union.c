/*
#__ Union __#

   -A union is a user-defined type similar to structs in C except for one key difference.
    -Structures allocate enough space to store all their members, 
    -whereas unions can only hold one member value at a time.
    -Union is a user-defined data type, but unlike structures, they share the same memory location.
   -Syntax:
        union structureName {
                dataType member1;
                dataType member2;
                ...
            };
        int main() {
            union structureName variable1;
            union structureName variable2;
            ...
            union structureName variableN;
            return 0;
        }
*/

#include<stdio.h>
union Student{
    int rollNo;
    char name[20];
    float marks;
};
void main(){
    union Student std1={01,"AnkitSingh",99.99};
    union Student *ptr;
    ptr = &std1;
    printf("Student Detail\n");
    printf("RollNo : %d \nName : %s \nMarks : %f ",ptr->rollNo,ptr->name,ptr->marks);

}