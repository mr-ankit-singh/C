/*
#__ Auto Storage Class __#

   - The variable which is created by using the specifier auto within a block is called auto variable. 
   - The auto storage class is the default storage class for all local variables.

*/
#include <stdio.h>
void abc();
int main()
{
   abc();
   abc();
   abc();
   return 0;
}
void abc()
{
    auto int a = 5;
    ++a;
    printf("\n a = %d ", a);
}


#include <stdio.h>
void abc();
int main()
{
    auto int a = 5;
    ++a;
    abc();
    abc();
    ++a;
    printf("\n a = %d", a);
    return 0;
}
void abc()
{
    int a = 10;
    ++a;
    printf("\n a = %d ", a);
}


