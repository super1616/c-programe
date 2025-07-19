#include<stdio.h>
#include<string.h>
int main(){
struct book
{
  char name [50];
  int noofpage;
  float price;
}a,b,c;

a.noofpage = 100;
a.price = 411.6;
//a.name = "Secret Seven";
strcpy(a.name,"secret seven");

b.noofpage = 1000;
b.price = 800.8;
strcpy(b.name,"famous five");
// a.name[0]='S';
// a.name[1]='e';
// a.name[2]='v';
// a.name[3]='e';
// a.name[4]='n';
printf("%d\n",a.noofpage);
printf("%f\n",a.price);
printf("%s\n",a.name);

printf("%d\n",b.noofpage);
printf("%f\n",b.price);
printf("%s\n",b.name);
// char ch[13] ;
// strcpy(ch,"secret seven");
// printf("%s",ch);
return 0;

}
