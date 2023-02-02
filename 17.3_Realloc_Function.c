/*
#__ realloc() Function __#

   -If the dynamically allocated memory is insufficient or more than required,
   -You can change the size of previously allocated memory using the realloc() function.
   -Syntax:
        ptr = (castType*) realloc(reallocated_ptr, new_size);

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    for (int i = 0; i < n1; i++)
    {
        printf("Enter the Element %d : ", i + 1);
        scanf("%d", (ptr + i));
    }

    printf("Value of previously allocated memory:\n");
    for (i = 0; i < n1; ++i)
        printf("%d\n", *(ptr + i));

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    int *ptr1 = realloc(ptr, n2 * sizeof(int));

    printf("Value of newly allocated memory:\n");
    for (i = 0; i < n2; ++i)
        printf("%d\n", *(ptr1 + i));

    free(ptr1);

    return 0;
}