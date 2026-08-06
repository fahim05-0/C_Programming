#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book   //user defined data type
    {
        char name[50];
        float price;
        int npages;   
    } Book;
    
     // initiallization
     Book a;
    
    a.price =123.0;
    a.npages=500;
    strcpy(a.name, "secret seven");

    printf("%d\n",a.npages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);



    return 0; 

     
}
