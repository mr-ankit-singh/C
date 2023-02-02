/*
#__ Structure in C __#

   -A structure is a keyword that create user defined data type in C/C++. 
   -A structure creates a data type that can be used to group items of possibly different types into a single type. 
   -‘struct’ keyword is used to create a structure. 

  Syntax of struct 🙋‍♂️

        struct structureName {
            dataType member1;
            dataType member2;
            ...
        };

  Create struct variable/object 🙋‍♂️
   
   -When a struct type is declared, no storage or memory is allocated. 
   -To allocate memory of a given structure type and work with it, we need to create variables.
   -Syntax:
     Method:1

        struct structureName {
            dataType member1;
            dataType member2;
            ...
        };
        int main() {
            struct structureName variable1;
            struct structureName variable2;
            ...
            struct structureName variableN;
            return 0;
        }

     Method:2

        struct structureName {
            dataType member1;
            dataType member2;
            ...
        }variable1,variable2....variableN;

*/

#include<stdio.h>

struct Student{
    char Name[20];
    int RollNo;
    float Marks;

};
int main(){
    struct Student s1;
    printf("Size of structure:%d",sizeof(s1));
    return 0;
}