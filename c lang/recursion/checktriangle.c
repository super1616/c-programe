# include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three sides of triangle:");
scanf("%d%d%d",&a,&b,&c);
if(a+b<=c || b+c<=a || c+a<=b)
  printf("Not a Triangle");
else if(a==b && b==c )
  printf("This is a equilateral triangle");
else if(a!=b && b!=c && c!=a)
  printf("This is scalene Triangle");
else
  printf("This is a isoscales Triangle");
}

