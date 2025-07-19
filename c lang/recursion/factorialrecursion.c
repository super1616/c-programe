#include<stdio.h>

int factorial(int x );

int  main()
{
    int a ,b;
    printf("enter a number :");
    scanf("%d",&a);
    b=factorial(a);
    printf("%d",b);
}

int factorial(int x){
    int r=1;
    if(x==1 || x==0)
      return 1;
    else
      r= x*factorial(x-1);
      return r;
}