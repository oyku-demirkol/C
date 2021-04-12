#include <stdio.h> //standart input output header


int main()//main function
{
    int a = 5;
    int b;
    b = ++a + a++ * --a;
    //++a + a++ * --a -> let's examine: ++a means pre increment now a is 5+1=6 , a++ means post increment now a is still 6
    //our a value was 6 but after that a++(post inc.) our new a value is 6+1=7
    //--a means pre decrement  that's why finally a value is 7-1=6
    //summary of command b = 6 + 6*6 = 42
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    //Format Specifiers are used with % character ( %d or %i are used for integers )
    return 0;
}
