//  USER DEFINED  DATA TYPE IS DATA STRUCTURE
#include<stdio.h>
int main(){
    struct pokemon   //user defined data type
    {
        int hp;
        int speed;
        int damage;
        char tier;
    
    };
    
    struct pokemon pikachu; // initiallization
    pikachu.damage =60;
    pikachu.hp =50;
    pikachu.speed = 100;
    pikachu.tier='A';

    printf("%d",pikachu.damage);  //accesss

    struct pokemon charizard ;
    charizard.damage=120;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    return 0;


     
}