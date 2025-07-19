// factorial using recursion
#include<stdio.h>
int factorial(int x);//fun declare 
void main(){
    int a,b;
printf("enter a no: ");
scanf("%d",&a);
b= factorial(a); // fun calling
printf("%d",b);
}
int factorial(int x) //fun fun defining
{
    int r = 1;
    if(x==1)
    return 1;
    else 
    return x*factorial(x-1);

}