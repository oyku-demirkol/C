#include <stdio.h>
#include <stdlib.h>

int main()
{
    // * = indirection operator , & = address operator
    // pointer = a variable that holds an address

    int *ptam , tam = 33;
    ptam = &tam;
    printf("tam: content = %d\n",tam);
    printf("tam: address = %p\n",&tam);
    printf("tam: address = %p\n",ptam);

    return 0;
}
