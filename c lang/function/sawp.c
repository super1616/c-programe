#include<stdio.h>
int main(){ int a;
    printf("enter first no: ");
    scanf("%d",&a);
    int b;
    printf("enter second no: ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the value of a is %d \n",a);
    printf("the value of b is %d \n",b);
    return 0;
}

