#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/* Selection sort is a sorting algorithm that
selects the smallest element from an unsorted list in each iteration
and places that element at the beginning of the unsorted list.*/

void selectionsort(int arr[] , int size ){
    int i,j;
    int minimumindex;
    for ( i =0; i<size; i++ ){
            minimumindex = i;
        for(j=1+i ; j<size; j++){
            if(arr[j]< arr[minimumindex]){
               minimumindex = j ;

            }
        }
        int temp = arr[i];
        arr[i] = arr[minimumindex] ;
        arr[minimumindex] = temp;
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
    selectionsort(array,size);

    for(i=0; i < size ; i++ ){
        printf("%d ",array[i]);
    }
    return 0;
}
