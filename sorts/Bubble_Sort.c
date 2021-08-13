#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/* Bubble sort is a algorithm for arranging a string of numbers or other elements in the correct order. 
The method works by examining each set of adjacent elements in the string, from left to right, switching their positions if they are out of order. 
The algorithm then repeats this process until it can run through the entire string and find no two elements that need to be swapped.*/

void bubblesort(int arr[] , int size ){
    int i,j;
    for ( i =0; i<size; i++ ){
        for(j=1; j<size-i; j++){
            if(arr[j-1]< arr[j]){
                int temp = arr[j];
                /*a temporary variable is a variable with short lifetime,
                 usually to hold data that will soon be discarded,
                 or before it can be placed at a more permanent memory location. */

                arr[j] = arr[j-1];
                arr[j-1] = temp;

            }
        }
    }


}
int main()
{
    int array[MAX], size;
    int i;
    printf("how many elements");
    scanf("%d", &size);
    for(i=0; i < size ; i++ ){
        scanf("%d", &array[i]);
    }
    bubblesort(array,size);

    for(i=0; i < size ; i++ ){
        printf("%d ",array[i]);
    }
    return 0;
}
