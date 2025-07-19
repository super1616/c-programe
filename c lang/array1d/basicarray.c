#include<stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<=3;i++){
        printf("\n enter element no %d",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;

    // int arr[6] = {3,4,5,6,8,7};
    // arr[4] = 100;
    // float arr[4] = {1.2,2.3,3.4,4.5};
      printf("%d",arr[2]);
     return 0;
}