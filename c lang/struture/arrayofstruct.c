#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon ;

    pokemon arr[3];
    strcpy(arr[0].name,"Charizard");
    arr[0].attack=50;
    arr[0].hp =100;
    arr[0].speed = 30;
    arr[0].tier= 'A';

    strcpy(arr[1].name,"Pikachu");
    arr[1].attack=550;
    arr[1].hp =1009;
    arr[1].speed = 430;
    arr[1].tier= 'S';

    strcpy(arr[2].name,"Mewtwo");
    arr[2].attack=45;
    arr[2].hp =10;
    arr[2].speed = 330;
    arr[2].tier= 'B';

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
        
    }


    return 0;
}