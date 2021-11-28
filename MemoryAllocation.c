#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pt;
    int n,i;

    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d \n",n);

    pt = (int*)malloc(n*sizeof(int));
    /*ptr = (int*) malloc(100 * sizeof(int));
Since the size of int is 5 bytes, this statement will allocate 500 bytes of memory.
 And, the pointer pt holds the address of the first byte in the allocated memory. */

    if(pt == NULL){ //NULL = emptiness
        printf("Memory not allocated. \n");
        exit(0);
//the exit function calls all functions registered with atexit(The function to register as a termination function.) and terminates the program.
//File buffers are flushed, streams are closed, and temporary files are deleted.
    }
    else{
        printf("Memory successfully allocated.\n");

    for(i=0; i<n; ++i){
        pt[i] = i+1;
    }
    printf("The elements of the array are:");

    for(i=0;i<n;++i){
        printf("%d, ",pt[i]);
    }
}
    return 0;
}
