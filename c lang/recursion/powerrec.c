#include<stdio.h>
int powerlog(int n, int m){
    if(m==0) return 1;
    int recans=n*powerlog(n,m-1);
    return recans;
}
int main(){
    int n;
    printf("enter base: ");
    scanf("%d",&n);
    int m;
    printf("enter power: ");
    scanf("%d",&m);
    int p = powerlog(n,m);
    printf("%d",p);
    return 0;
  
}