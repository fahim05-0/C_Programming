#include<stdio.h>
#include<string.h>
int main (){
    typedef struct pokemon{
        int hp, speed, attack;
        char tier;
        char name[15];

    }pokemon;
    pokemon arr[3];

    arr[0].attack=50;
    arr[0].hp=80;
    arr[0].speed=100;
    arr[0].tier='A';
    strcpy(arr[0].name , "Pikachu");

    arr[1].attack=60;
    arr[1].hp=90;
    arr[1].speed=100;
    arr[1].tier='C';
     strcpy(arr[1].name , "Charizar");

    arr[2].attack=100;
    arr[2].hp=80;
    arr[2].speed=100;
    arr[2].tier='A';
     strcpy(arr[2].name , "mew");

    for (int i=0 ; i<3 ; i++){
        printf("%s\n\n",arr[i].name);

        printf("%d\n%d\n%d\n%c\n",arr[i].attack,arr[i].hp,arr[i].speed,arr[i].tier);
        }

    return 0;
}