#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Person{
        char name[50];
        int salary;
        int age;
    } Person;
    Person x;
    Person y;
    
    x.age = 22;
    x.salary = 30000;
    strcpy(x.name,"Sima");

    y.age = 24;
    y.salary = 900000;
    strcpy(y.name,"Super");

    printf("%s\n",x.name);
    printf("%d",y.age);

    return 0;
}