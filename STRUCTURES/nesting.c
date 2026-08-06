#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon   //user defined data type
    {
        int hp;
        int speed;
        int damage;
        char tier;
    
    }pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    }LP;

    LP mewtwo;
    strcpy(mewtwo.ability , "pressure" );
    mewtwo.normal.damage =100;            // double dot nesting
    mewtwo.normal.hp=150;
    mewtwo.normal.speed=200;
    
   
    return 0;


     
}