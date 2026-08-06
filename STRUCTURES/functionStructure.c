#include<stdio.h>
#include<string.h>
typedef struct pokemon   //user defined data type
    {
        int hp;
        int speed;
        int damage;
        char name [15];
    
    }pokemon;

void fun(pokemon p ){    // passby value can not change in functon

    printf("%d\n",p.hp);
    return;
}

void change (pokemon* p){

    p->hp=100;                 // -> syntax   oe (*x).___
    p->speed=200;
    p->damage=300;
    strcpy(p->name , "FUCKACHU");

    return;
}

int main(){
    
    pokemon p;
    
    
   pokemon p={50 , 100 , 60 ,"PIKACHU"};          // p.hp =50;
                                                  // p.speed = 100;
                                                  // p.damage =60;
                                                  // strcpy(p.name , "PIKACHU");

    printf("%d\n",p.hp);
    printf("%d\n",p.speed);
    printf("%d\n",p.damage);
    printf("%s\n\n",p.name);

    fun(p);

    change(&p);
   

    printf("\n%d\n",p.hp);
    printf("%d\n",p.speed);
    printf("%d\n",p.damage);
    printf("%s\n",p.name);
    return 0;

}