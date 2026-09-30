//reverse of a no.
#include <stdio.h>
int main()
{
    int t,n,rev;

    printf("Enter your number:");
    scanf("%d", &n);
    t=n;
    rev=0;
    while (t>0)
    {
        rev= rev*10 + (t%10);
        t/=10;

    }

    printf("Reverse of number n: %d", rev);

    return 0;

}