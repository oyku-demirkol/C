//Displaying a histogram
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//function main begins program execution
int main()
{
    //use initalizer list to initialize array n
    int n[SIZE] = {19,3,15,7,11};

    printf("%s%13s%17s\n", "Element","Value","Histogram");
  //for each element of array n, output a bar of the histogram
    for(size_t i=0; i< SIZE; i++){
        printf("%7u%13d      ",i,n[i]);
        for(int j =1; j<= n[i]; ++j){ //print one bar
            printf("%c", '*');
        }
        puts(""); //end a histogram bar with a newline
/*The puts function in C is used to write a line or string to the output stream (stdout) that is up to,
but does not include, the null character. The puts function also appends a newline character to the output and returns an integer.
To use the puts function, you need to include the <stdio.h> library in the program.
The puts function takes a single mandatory parameter, i.e., a null-terminated character array.
The puts function writes the provided argument to the output stream and appends a newline character at the end.
If the execution is successful, the function returns a non-negative integer; otherwise, it returns an EOF (End-of-File) for any error. */
    }

    return 0;
}
