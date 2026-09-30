//quotient and remainder//
#include <stdio.h>
int main()
{
    int a,b, quotient, remainder;
    printf("Enter number 1:");
    scanf("%d",&a);

    printf("Enter number 2:");
    scanf("%d",&b);

    quotient=a/b;
    remainder=a%b;

    printf("Quotient= %d \n",quotient);
    printf("Remainder= %d",remainder);

}

