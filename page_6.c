//marks to percentage//
#include <stdio.h>
int main()
{
    float marks, percentage;

    printf("Enter total marks:");
    scanf("%f",&marks);

    percentage=(marks/500)*100;
    printf("Your calculated percentage is: %f ",percentage);

    return 0;

}