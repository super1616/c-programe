#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day = 5;
    a.month = 12;
    a.year = 2025;

    b.day = 5;
    b.month = 12;
    b.year = 2023;
    //    bool flag = true;
    //    if(a.day != b.day) flag = false;
    //    if(a.month != b.month) flag = false;
    //    if(a.year != b.year) flag = false;
    //    if(flag==true) printf("the dates are same");
    //    else printf("the dates are different");
    date c;
    c = a;
    bool flag = true;
       if(a.day != c.day) flag = false;
       if(a.month != c.month) flag = false;
       if(a.year != c.year) flag = false;
       if(flag==true) printf("the dates are same");
       else printf("the dates are different");
      
       return 0;
}