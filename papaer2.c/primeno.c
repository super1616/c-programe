#include<stdio.h>
void main()
{
   int num,i,count,n;
   printf("enter max range: ");
   scanf("%d",&n);
   for(num = 1;num<=n;num++){
    count=0;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if (count==0 && num!=1)
    printf("%d",num);
   }
}