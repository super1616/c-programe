// find largest no
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("enter three number: ");
   scanf("%d%d%d",&a,&b,&c);
   if((a>b) && (a>c))
   printf("%d is largest",a);
   if((b>a)&&(b>c))
   printf("%d is largest",b);
   else
   printf("%d is largest",c);
  
}