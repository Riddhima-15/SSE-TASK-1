#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter number a:");
    scanf("%d",&a);

    printf("Enter number b:");
    scanf("%d",&b);

    if(a%b==0){
        printf(" a is divisible by b"); }
    else
    {  printf("a is not divisible by b");
        }
    

    return 0;
}