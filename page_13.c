#include <stdio.h>
int main(){
    int i,N;
    printf("Enter the year:");
    scanf("%d",&N);
    printf("Leap years are:");
    for(int i=1;i<=N;i++ )
    {
        if(i%4==0 && i%100!=0 || i%400==0){
            printf("%d \n",i);
        }

    }
}
