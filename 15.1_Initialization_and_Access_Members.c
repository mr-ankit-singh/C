/*
#__ Initilization & Access Members in structure __#

   -There are two types of operators used for accessing members of a structure.

       1) .   : Member operator
       2) ->  : Structure pointer operator 

*/

// At compile time

#include<stdio.h>
struct Student{
    char name[15];
    int rollno;
    float marks;
};
int main(){
    //Object:1
    struct Student s1={"ankit",1,99.99};
    //Object:2
    struct Student s2={"Singh"};
    // s2.name="a";
    s2.rollno=2;
    s2.marks=98.98;
    printf("Student 1 Detail\n Name=%s , RollNo=%d , Marks=%f\n",s1.name,s1.rollno,s1.marks);
    printf("Student 2 Detail\n Name=%s , RollNo=%d , Marks=%f",s2.name,s2.rollno,s2.marks);
    return 0;
}


// At runtime 

#include<stdio.h>
struct Student{
    char name[15];
    int rollno;
    float marks;
};
int main(){
    //Object:1
    struct Student s1;
    printf("Enter Student Detail\n");
    scanf("%s",s1.name);
    scanf("%d",&s1.rollno);
    scanf("%f",&s1.marks);
    printf("Student 1 Detail\n Name=%s , RollNo=%d , Marks=%f\n",s1.name,s1.rollno,s1.marks);
    return 0;
}
