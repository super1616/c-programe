//palindrom no
#include<stdio.h>
void main(){
    int n,t,rem,rev=0;
    printf("enter a no");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        rem =n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    if(t==rev)
    printf("%d is apalindrom no",t);
    else
    printf("%d is not palindrom",t);
    
}