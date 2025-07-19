#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    int** y = &x; 
    int*** z = &y;
    printf("%p\n",a);
    printf("%p\n",*x);
    printf("%p\n",**y);
    printf("%p\n",***z);
    return 0;
}