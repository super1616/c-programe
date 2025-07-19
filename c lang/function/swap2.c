#include<stdio.h>
int main(){ int a;
    printf("enter first no: ");
    scanf("%d",&a);
    int b;
    printf("enter second no: ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the value of a is %d \n",a);
    printf("the value of b is %d \n",b);
    return 0;
}

