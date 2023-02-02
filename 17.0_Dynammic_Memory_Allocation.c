/*
#__ Dynammic Memory Allocation __#

   -The concept of dynamic memory allocation in c language enables the C programmer to allocate memory at runtime.
   -The <stdlib.h> library has functions responsible for Dynamic Memory Management.
   
   -static memory allocation	                            dynamic memory allocation
    memory is allocated at compile time.	                memory is allocated at run time.
    memory can't be increased while executing program.	  memory can be increased while executing program.
    used in array.	                                      used in linked list.
 
   -Now let's have a quick look at the methods used for dynamic memory allocation.

    malloc()	  allocates single block of requested memory.
    calloc()	  allocates multiple block of requested memory.
    realloc()	  reallocates the memory occupied by malloc() or calloc() functions.
    free()      frees the dynamically allocated memory.

*/