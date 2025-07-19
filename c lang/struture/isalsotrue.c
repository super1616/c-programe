#include<stdio.h>
int main(){
    struct  pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    }pikachu,charizard;
    
    printf("enter attack of pikachu : ");
    scanf("%d",&pikachu.attack);
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    charizard.attack = 130;
    charizard.hp = 90;
    charizard.speed = 90;
    charizard.tier = 'S';

    printf("%d",pikachu.attack);
    return 0;
    
    
}