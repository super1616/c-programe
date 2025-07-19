#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    struct date{
        int day;
        int month;
        int year;
    }a,b;
    a.day = 5;
    a.month = 12;
    a.year = 2025;

    b.day = 5;
    b.month = 12;
    b.year = 2023;
    // if(a==b)  this will give error
    bool flag = true;
//     if(a.day == b.day) printf("the dates are same");
//     else  printf("the dates are diffrent");
       if(a.day != b.day) flag = false;
       if(a.month != b.month) flag = false;
       if(a.year != b.year) flag = false;
       if(flag==true) printf("the dates are same");
       else printf("the dates are different");
       return 0;
}