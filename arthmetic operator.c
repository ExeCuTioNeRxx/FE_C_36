// Arthmetic Operators in C
#include <stdio.h>
int main ()
{
     int a,b ;
     float c ;
     a=15;
     b=12;
     c = a+b;
     printf("Sum of %d and %d is %.2f\n", a,b,c);
     c =a*b ;
     printf("Product of %d and %d is %.2f\n", a,b,c);
     c=a/b ;
     printf("Integer Division of %d by %d is %.2f\n",a,b,c);
     c=(float)a/b;
     printf("Real Division of %d by %d is %.2f\n",a,b,c);
     return 0 ;
}

/*Output
Sum of 15 and 12 is 27.00
Product of 15 and 12 is 180.00
Integer Division of 15 by 12 is 1.00
Real Division of 15 by 12 is 1.25
*/