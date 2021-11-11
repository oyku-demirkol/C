/* String Comparison: Write a program to get string1
and string2 from user. Then compare each element
iteratively to find if they are same or different. Finally,
display if the two strings matched or not */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20];
    int value; //declaration of integer variable
    printf("Enter the first stting:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    //comparing both the strings using strcmp() function
  value= strcmp(str1,str2);
  if(value == 0)
    printf("strings are same");
  else
    printf("strings are not same");
    return 0;
}
