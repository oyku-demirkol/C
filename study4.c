#include <stdio.h>
#include <stdlib.h>

int main()
/* If the value is equal to 1 or 2, it prints the value,
if other than these two values,
it prints the information "The number value you entered is invalid" */
// with switch-case
{
    int number = 0;
    printf("Please enter one number");
    scanf("%d",&number);
    switch(number) {
     case 1:
         printf("numeric value you entered -> 1\n");
         break;
     case 2:
        printf("numeric value you entered -> 2\n");
        break;
     default:
        printf("The number value you entered is invalid\n");
        break;
    }
    return 0;
}
