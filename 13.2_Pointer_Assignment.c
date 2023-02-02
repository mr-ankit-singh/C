/*
#__ Pointer Assignment __#
*/

#include<stdio.h>
void main(){
    int a=10,b=20;
    int *p,*q;
    p,q=&a,&b;
    p=q;
    printf("a= %d %d %d",a , *p,*q);
}

//Not working
#include<stdio.h>
void main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    *p=*q;
    printf("a= %d %d %d",a , *p,*q);
}

//Its working
#include<stdio.h>
void main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    *p=*q;
    printf("a= %d %d %d",a , *p,*q);
}