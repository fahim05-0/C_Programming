#include<stdio.h>
#include<conio.h>
int main(){
    printf("IF u WANT TO FIND AREA OF\ncirCLE ENTER C\nRECTANGLE ENTER R \nTEIANGLE ENTER T\n");
    char c=getche();
    printf("\n"); 

    if(c=='C'){
        float r;
        scanf("%f",&r);
        printf("area is %f\n",3.14*r*r);
    }
    if(c=='R'){
        float l,b;
        scanf("%f %f",&l,&b);
        printf("area is %f",l*b);

    }
    if(c=='T'){
        float b,h;
        scanf("%f %f",&b,&h );
        printf("AREA IS %f\n",.5*b*h);
    }
    return 0;

}