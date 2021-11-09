//Treating character arrays as string
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

// function main begins program execution
int main()
{
    char string1[SIZE]; //reserves 20 characters
    char string2[] = "string literal";

    //read string from user into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1);

    //output strings
    printf("string1 is: %s\nstring2 is: %s\n"
           "string1 with spaces between charachter is:\n",string1,string2);
     //output characters until null character is reached
     for(size_t i=0; i<SIZE && string1[i] != '\0'; ++i){  
         //space = '\0' The character constant representing the null character is '\0'. 
         //All strings in C end with this character!!! 
        printf("%c ", string1[i]);
     }
     puts("");

    return 0;
}
