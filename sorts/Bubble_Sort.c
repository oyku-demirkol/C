#include <stdio.h>
#include <stdlib.h>
#define MAX 50

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
