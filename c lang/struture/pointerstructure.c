#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct  pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
}pokemon;

int main(){
   pokemon pikachu;
   pikachu.hp = 60;
   pikachu.attack = 50;
   pikachu.speed = 100;
   pikachu.tier = 'A';
   strcpy(pikachu.name,"pikachu");
   pokemon* x =&pikachu;
   
//    printf("%p\n", (void*)&pikachu.hp);
printf("%p\n", (void*)&pikachu.speed);
printf("%p\n", (void*)&pikachu.attack);
printf("%p\n", (void*)&pikachu.tier);
printf("%p\n", (void*)pikachu.name); // array name decays to pointer
// printf("%p\n", (void*)x);            // x is already a pointer

   printf("%p",x);
}