
#include <stdio.h>

int main()
{
float principal, rate, time, simple_interest;
printf("Enter Principal amount:");
scanf("%f", &principal);

printf("Enter Rate of Interest:");
scanf("%f", &rate);

printf("Enter Time (in yrs):");
scanf ("%f", &time);

simple_interest=(principal*time*rate)/100;
printf("Simple Interest= %f", simple_interest);

return 0;
}
