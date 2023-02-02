/*
#__ Wild Pointer __#

   - Uninitialized pointers are known as wild pointers.
   - Because they point to some arbitrary memory location.
   - And may cause a program to crash or behave badly.
   - A wild pointer points to some random memory location.
*/

#include<stdio.h>
int main() {
  int  *ptr;
  /* Ptr is a wild pointer, as it is not initialized Yet */
  printf("%d", *ptr);
}

/*--------------------------------------------------------------------------*/
// Note : How can we avoid Wild Pointers ?
// We can initialize a pointer at the point of declaration wither by 
// the address of some object/variable or by NULL;

int main() {
  int val = 5;
  int  *ptr = &val; /* Initializing pointer */
  /* Ptr is not a wild pointer, it is pointing to the address of variable val */
  printf("%d", *ptr);
}