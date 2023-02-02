/*
#__ Array of Structure __#

   -An array of structres in C can be defined as the collection of multiple structures variables 
     where each variable contains information about different entities. 
   -The array of structures in C are used to store information about multiple entities of different 
     data types. 
   -The array of structures is also known as the collection of structures.

*/

#include<stdio.h>
struct Student{
    int rollNo;
    char name[20];
    float marks;
};
void main(){
    int n ;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    struct Student std[n];
    for (int i=0;i<n;i++){
        printf("Enter Student : %d Detail\n",i+1);
        scanf("%d %s %f",&std[i].rollNo,std[i].name,&std[i].marks);
    }
    for (int i=0;i<n;i++){
        printf("\nStudent : %d Detail\n",i+1);
        printf("%d %s %f",std[i].rollNo,std[i].name,std[i].marks);
    }
}