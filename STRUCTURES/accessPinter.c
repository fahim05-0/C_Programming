#include<stdio.h>
typedef struct person   //user defined data type
    {
        int age;
        float weight;

    }person;

int main(){
    
    person p;

    person* x =&p; // sturcture pointer
    
    (*x).age=50;           // p.age=50;                brackets must
    (*x).weight=76.4;      // p.weight=76.4;
    
    printf("\n%d\n",(*x).age);
    printf("\n%f\n",(*x).weight);
    
   
    return 0;

}