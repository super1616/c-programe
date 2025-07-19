#include<stdio.h>

long factorial(int x );

int  main()
{
    int a;
    long b=0;
    printf("enter a number :");
    scanf("%d",&a);
    b=factorial(a);
    printf("%ld \n ",b);
}

long factorial(int x){
    if(x==1 || x==0)  return 1;
    return x*factorial(x-1);
}