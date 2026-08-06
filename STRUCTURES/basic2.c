#include<stdio.h>
int main(){
    struct pokemon   //user defined data type
    {
        int hp;       //attributes
        int speed;
        int damage;
        char tier;
    
    }pikachu , charizard;    //also works
    
     // initiallization
    pikachu.damage =60;
    pikachu.hp =50;
    pikachu.speed = 100;
    pikachu.tier='A';

    printf("%d",pikachu.damage);  //accesss

    
    charizard.damage=120;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    return 0;


     
}