#include<stdio.h>
int fibo(int n)
{
   if(n<=2)
     return 1;
   else
     return (fibo(n-1)+fibo(n-2));
}
void main()
{
    int x;
    printf("enter thr no position:");
    scanf("%d",&x);
    printf("%d-the fibonacci number is %d\n",x,fibo(x));
}