#include<stdio.h>
void main(){
    int y;
    printf("enter a year:");
    scanf("%d",&y);
    if(y%100==0){
        if(y%400==0)
        printf("%d is a lrap year",y);
        else
        printf("%d is not leap year",y );
    }
    else{
        if(y%4==0)
        printf("%d is year year",y);
        else
        printf("%d is not leap year ",y);
    }

}