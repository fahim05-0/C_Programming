#include<stdio.h>
typedef struct pokemon   //user defined data type
    {
        int hp;
        int speed;
        int damage;
        char tier;
    
    }pokemon;

int main(){
    
    pokemon p;

    pokemon* x =&p; // sturcture pointer
    
    p.damage =60;
    p.hp =50;
    p.speed = 100;
    p.tier='A';

    printf("\n%p\n",&p.hp);
    printf("\n%p\n",&p.speed);
    printf("\n%p\n",&p.damage);
    printf("\n%p\n",&p.tier);
    printf("\n%p\n",x);
    
   
    return 0;

}