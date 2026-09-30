// fahreneit to celsius//
#include <stdio.h>
int main()
{
 float fahrenheit, celsius;

 printf("Enter temperature(in F):");
 scanf("%f",fahrenheit);

 celsius= ((fahrenheit-32))*(5/9);
 printf("Converted temperature(in C): %f",celsius);

 return 0;
}

