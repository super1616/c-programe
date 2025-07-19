#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    *x = 7;
    printf("%d",*x);
    return 0;
}