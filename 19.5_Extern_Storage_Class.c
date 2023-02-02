/*
#__ Extern Storage Class __#

   - The variable which is created by using the keyword extern called as extern variable.

*/

// First File: main.c
#include <stdio.h>
int count;
extern void write_extern();
main() 
{
   count = 5;
   write_extern();
}

// Second File: support.c
#include <stdio.h>
extern int count;
void write_extern(void) 
{
   printf("count is %d\n", count);
}