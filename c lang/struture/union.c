#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef union  pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
}pokemon;


int main(){
   // pokemon pikachu = {80,120,90,'S',"pikachu"};// value should be in sequence
   pokemon pikachu;
   pikachu.hp = 60;
   pikachu.attack = 50;
   pikachu.speed = 100;
   pikachu.tier = 'A';
   strcpy(pikachu.name,"pikachu");

   
printf("%d\n", pikachu.hp);
printf("%d\n", pikachu.speed);
printf("%d\n", pikachu.attack);
printf("%c\n", pikachu.tier);
printf("%s\n", (pikachu.name)); // array name decays to pointer


return 0;

}