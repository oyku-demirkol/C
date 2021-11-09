//Passing arrays and individual array elements to functions
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//function prototypes
void modifyArray(int b[], size_t size);
void modifyElement(int e);

//function main begins program execution
int main()
{
    int a[SIZE] = {0, 1, 2, 3, 4}; //initalize array a

    puts("Effects of passing entire array by reference:\n\nThe "
         "values of the original array are:");
    //output original array
    for(size_t i=0; i<SIZE; ++i){
        printf("%3d", a[i]);
    }
    puts("");

    modifyArray(a, SIZE); //pass array a to modifyArray by reference
    puts("The values of the modifies array are:");

    //output modified array
    for(size_t i=0; i< SIZE; ++i){
        printf("%3d", a[i]);
    }
    //output value of a[3]
    printf("\n\n\nEffects of passing array element "
           "by value:\n\nThe value of a[3] is %d\n", a[3]);
    modifyElement(a[3]); //pass array element a[3] by value
    // output value of a[3]
    printf("The value of a[3] is %d\n", a[3]);
}
    //in function modifArray, "b" points to the original array "a"
    //in memory
    //then the values passing in b to a
    void modifyArray(int b[], size_t size){
    //multiply each array element by 2
    for(size_t j=0; j<size; ++j){
        b[j] *=2; //actually modifies original array  b[j]  = b[j] * 2
     }
    }
    //in function modifyElement, "e" is a local copy of array element
    //a[3] passed from main
    //e passing to a[3]
    void modifyElement(int e){
    //multiply parameter by 2
    printf("Value in modifyElement is %d\n", e *=2);
    }


