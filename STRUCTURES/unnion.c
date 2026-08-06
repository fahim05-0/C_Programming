#include<stdio.h>
#include<string.h>
typedef union pokemon   //union last declaration will be printed (over written previous ones)
                        //(largest members size of memory will be allocated )
    {
        int hp;
        int speed;
        int damage;
        char name [15];
    
    }pokemon;

int main(){
    
    pokemon p;
     
    p.hp =50;
    p.speed = 100;
    p.damage =60;
    strcpy(p.name , "PIKACHU");

    printf("%d\n",p.hp);
    printf("%d\n",p.speed);
    printf("%d\n",p.damage);
    printf("%s\n\n",p.name);

    return 0;

}