// hcf and factorial
#include <stdio.h>

int main()
{
int a, b, i,j, hcf,factorial;

printf("Enter number a:");
scanf("%d", &a);

printf("Enter number b:");
scanf("%d", &b);

for (i=1; i<=a||i<=b;)
{
if (a%i==0 && b%i==0){
  hcf=i;
}
i+=1;
}

printf("HCF of the 2 numbers is: %d \n",hcf);

factorial=1;
for(j=1;j<=a;j++)
{
factorial*=j;
}
printf("Factorial of a: %d",factorial);

return 0;
}