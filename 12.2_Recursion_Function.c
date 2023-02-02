/*
#__ Recursion Function __#

   -A function in c can call itself .This is called Recursion 
   -A function calling itself is called as recursive function.

*/

#include<stdio.h> 
int faictorial(int a);
int main()
{
    int a ;
    printf("Enter the value\n");
    scanf("%d",&a);
    printf("Factiorial of %d is %d",a ,faictorial(a));
    return 0;
}
int faictorial(int a){

    if( a==1 || a==0){
        return 1;
    }
    else{
        return a * faictorial(a-1);
    }
}