#include <stdio.h>
#include <stdlib.h>
#include <time.h> //It is a library added to generate random numbers.
int main()
{
    srand(time(NULL));
/* Using srand(time(NULL));
makes use of the computer's internal clock to control the choice of the seed.
Since time is continually changing,
the seed is forever changing.
Remember, if the seed number remains the same,
the sequence of numbers will be repeated for each run of the program.*/
    printf("dice %d and %d", 1 + rand()%6, 1+rand()%6);
    /*
int number = a + rand( ) % n;
a = the first number in your range
n = the number of terms in your range
(range computed by  largest value - smallest value + 1) */
// for example rand( ) % 3 = {0 , 1 , 2}
    return 0;
}
