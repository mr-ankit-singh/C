/*
#__ Structure Padding __#

   -Structure padding is a concept in C that adds the one or more empty bytes between the memory addresses to align the data in memory.
    Note: Assign member of structure a/c to increasing order of their memory size.
          To utilize memory effectively.
          
*/

#include<stdio.h>
struct Padding1{
    char a;
    int b;
    char c;
};
// change the order of variable
struct Padding2{
    char a;
    char c;
    int b;
};
void main(){
    struct Padding1 Pad1;
    struct Padding2 Pad2;
    printf("The size of structure\n");
    printf("The size of Padding1 structure is %d\n",sizeof(Pad1));
    printf("The size of Padding2 structure is %d\n",sizeof(Pad2));
}
