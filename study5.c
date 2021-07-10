#include <stdio.h>
#include <stdlib.h>

int main()
{
    //the switch case shouldn't care about what you define as invalid , its arbitrary , thats way it doesn't matter what we write.
    //and also -1 is a common "invalid" value
    int day = -1 ;
    printf("please enter the day value as a number in the range of [1,7] :");

    scanf("%d", &day);
    switch(day){
     case 1:
    printf("Monday\n");
    break;
     case 2:
        printf("Tuesday\n");
    break;
     case 3 :
        printf("Wednesday\n");
    break;
     case 4 :
        printf("Thursday\n");
    break;
     case 5 :
        printf("Friday\n");
    break;
     case 6 :
        printf("Saturday\n");
    break;
     case 7:
        printf("Sonday\n");
    break;
    default:
        printf("value entered is invalid!!\n");
    break;



    }
    return 0;
}
