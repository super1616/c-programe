#include<stdio.h>
//#include<limits.h>
int main(){
    int arr[7] = {55,4,8,9,3,2,10};
    int n = 7;
    printf("unsorted array: \n");
    for(int i = 0; i<n ;i++){
        printf(" %d ",arr[i]);
    }
    //insertion sort
    for (int i=1; i<n-1; i++ ){
        int j = i;
        while (j>0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
             arr[j] = arr[j-1];
             arr[j-1] = temp;
             j--;
        }
        

    }
    printf("\n");
    printf("sorted array:  \n");
    for(int i = 0; i<n; i++){
        printf(" %d ",arr[i]);
        
    }
     
    return 0;
}