#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon   //user defined data type
    {
        int hp;
        int speed;
        int damage;
        char tier;
    
    } pokemon;
    pokemon a,b,c;

    a.damage =60;
    a.hp =50;
    a.speed = 100;
    a.tier='A';

    b=a;   // except name or strings works  (deep copy)

    b.damage=200;

    printf("%d\n",b.hp);

    printf("%d\n",b.damage);

    printf("%d",a.damage);
    


    
    return 0;
}