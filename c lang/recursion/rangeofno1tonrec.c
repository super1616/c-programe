#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return;
    printf("%d",x);
    increasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    increasing(1,9);
    return 0;
}