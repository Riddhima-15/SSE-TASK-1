//calculate cube//
#include <stdio.h>
#include <math.h> //to call power fucntion//
int main()
{
    float num,cube;

    printf("Enter your number:");
    scanf("%f", &num);

    cube= pow(num,3); //pow(base,power)
    printf("cube of the number= %f", cube);

}