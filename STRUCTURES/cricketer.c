#include<stdio.h>
#include<string.h>
int main (){
    typedef struct cricketer
    {
        char name[15];
        int age;
        int nTM;
        float arun;
    }cric;

    cric arr[20];

    for (int i=0 ; i<2; i++){
        printf("ENTER DATA\n");
        
        scanf(" %14[^\n] %d %d %f",arr[i].name,&arr[i].age,&arr[i].nTM,&arr[i].arun);
    }
    for(int i=0 ; i<2;i++){
        printf("\n%s\n%d\n%d\n%f\n",arr[i].name,arr[i].age,arr[i].nTM,arr[i].arun);
    }
    return 0;
}