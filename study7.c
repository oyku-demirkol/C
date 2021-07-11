#include <stdio.h>
#include <time.h> //The time library gives us UNIX time. Unix time is a system for describing a point in time.
#include <stdlib.h>

//rolling two dice 10 times
int main(){
    srand(time(NULL));
    int dice1, dice2;
    for(int i = 0; i < 10; i++){

        dice1 = 1+(rand()%6);
        dice2 = 1+(rand()%6);
        printf("Dice1 : %d ve Dice2 : %d \n",dice1,dice2);
    }



    return 0;
}
