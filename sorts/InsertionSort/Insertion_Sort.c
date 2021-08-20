#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insertionSort(int arr[] ,int n){
    int i , key , j;
    for(i=1;i<n; i++){ //we start not with "i=0" cause we compare the number from right to left side .
        key = arr[i];
        j = i -1; //The j variable is the variable to control the numbers to the left of the "key" .

        while (j>= 0 && arr[j]> key){ //(j>=0)should be in our code otherwise it will not work cause we used j-- in while loop.
            arr[j+1] = arr[j]; //one-step scrolling
            j-- ; //j=j-1;
        }
        arr[j+1] = key; //placement
    }

}
void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n ; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]); //the number of elements in an array

    insertionSort(arr, n);
    printArray(arr, n);
}
