#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int counter = 0; //do not forget to set the counter value to be used in the while loop.
    printf("This program displays the squares of all numbers up to the number entered by the user.\n");
    printf("--------------------------------------------------------------------------------------\n");

    printf("Please enter a number:");
    scanf("%d",&number);

    while(counter <= number) {
        printf("square of the number %d = %d \n", counter , counter * counter);
        counter++;
    }

    return 0;
}
