#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(){
    int x=2;
    int y=3;
    swap(&x, &y);
    printf("the value of a is %d \n",x);
    printf("the value of b is %d \n",y);
    return 0;
}

