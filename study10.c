#include <stdio.h>
#include <stdlib.h>

int main()
{
    // * = indirection operator , & = address operator
    // pointer = a variable that holds an address
    // Pointers can be used in expressions just as any variable.
    // Arithmetic operators can be applied to whatever the pointer is pointing to.
    /* Note that parentheses are required for the ++ operator to increment the value being pointed to.
    The same is true when using the -- operator. */
    int *ptam , tam = 33;
    ptam = &tam;
    printf("tam: content = %d\n",tam);
    printf("tam: address = %p\n",&tam);
    printf("tam: address = %p\n",ptam);

    return 0;
}
