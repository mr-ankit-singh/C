/*
#__ Structure Packing __#

   -Structure Packing prevents compiler from doing padding means remove the unallocated 
     space allocated by structure.
   -We can avoid the structure padding in C in two ways:
        Using #pragma pack(1) directive
        Using  __attribute__((packed)) attribute.

*/
// Mtd:1 Using #pragma pack(1) directive

#include<stdio.h>
#pragma pack(1)
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


// mtd:2 Using  __attribute__((packed)) attribute

#include<stdio.h>
struct Padding1{
    char a;
    int b;
    char c;
}__attribute__((packed));
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