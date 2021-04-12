#include <stdio.h>


int main()
{
   int a = 5 , b = 13 , c = 8 , x ;
   a  +=2 ; // a = a + 2
   b -= a ++; // b = b - (a++)
   c *= --b ;// c = c * (--b)
   x = ++a * b-- % ++c ;
   printf("a = %d\n",a);
   printf("b = %d\n",b);
   printf("c = %d\n",c);
   printf("x = %d\n",x);

//be careful to pre increment/decrement and  post increment/decrement!
    return 0;
}
