/*
#__ Static Storage Class __#

   - The variable which is created by using the specifier static is called as static variable. 
   - When we are working with the auto variables, scope, and lifetime both are restricted with the body.
   - But when we are working with static variables, the scope is restricted is within the function but the lifetime is not restricted.

*/

#include <stdio.h>
/* function declaration */
void func(void);
static int count = 5; /* global variable */
int main() 
{
      while(count--) 
      {
      func();
      }
      return 0;
}
/* function definition */
void func( void ) 
{
   static int i = 5; /* local static variable */
   i++;
   printf("i is %d and count is %d\n", i, count);
}