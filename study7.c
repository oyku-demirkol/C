#include <stdio.h>
#include <time.h> //The time library gives us UNIX time. Unix time is a system for describing a point in time.
#include <stdlib.h>

//rolling two dice 10 times
int main(){
    srand(time(NULL));
    int zar1, zar2;
    for(int i = 0; i < 10; i++){

        zar1 = 1+(rand()%6);
        zar2 = 1+(rand()%6);
        printf("Zar1 : %d ve Zar2 : %d \n",zar1,zar2);
    }



    return 0;
}
