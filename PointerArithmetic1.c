#include <stdio.h>
#include <stdlib.h>

void reverse(int *parray, int length){
int *ptr = parray + length -1;
for(int i=0; i<length;++i){
    printf("%d ", *ptr); // Output: 99 88 77 66 55 44 33 22 11 0
    --ptr;
 }
 printf("\n");
}
//data[i] = *(data+i)
//In fact,fields (data []) essentially behave like pointers!
int main()
{
    int data[]={0,11,22,33,44,55,66,77,88,99};
    reverse(data,10);
    return 0;
}
