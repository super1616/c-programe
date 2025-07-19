#include<stdio.h>
#include<stdlib.h>
int main(){
    // int n; //4 bytes
    // printf("enter array's size : ");
    // scanf("%d",&n);
    // int arr[n]; // n*4
    // for(int i = 0; i<n; i++){
    //     scanf("%d",&arr[i]);
    // }
    // for (int i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }
    
    int* ptr = (int*)malloc(10*4);
    printf("%d",*ptr);
}