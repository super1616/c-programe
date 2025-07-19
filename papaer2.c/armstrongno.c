#include<stdio.h> // armstrong no
#include<math.h>
int main(){
    int n,digit,sum=0,c=0,t1,t2;
    printf("enter a no: ");
    scanf("%d",&n);
    t1=n;
    t2=n;
    while(n>0){
        n=n/10;
        c++;
    }
    while (t1>0)
    {
      digit = t1%10;
      sum = sum + pow(digit,c);
      t1=t1/10;    
    }
    if(sum==t2)
    printf("%d is a armstrong no",t2);
    else
    printf("%d is not a armstrong no",t2);
    return 0;
}