//Computing the sum of the elements of an array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

//function main begins program execution
int main()
{
    //use an initalizer list to initalize the array
    int a[SIZE] = {1,3,5,4,7,2,99,16,45,67,89,45};
    int total = 0;//sum of array

    //sum contents of array a
    for(size_t i = 0; i< SIZE; ++i){
        total += a[i];
    }
    printf("Total of array element values is %d\n", total);
    return 0;
}
