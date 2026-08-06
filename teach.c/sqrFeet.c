#include<stdio.h>
int main(){
    int n;
    printf("HOW MANY ROOMS U HAVE :");
    scanf("%d",&n);
    float sum=0.00;

    for (int i=1 ; i<= n ; i++){
        float l,b;
        printf("\nenter the dimentions :");
        scanf("%f %f",&l,&b);
        sum=sum + l*b;
    }

    printf("\nToTAL SQUARE FEET IS :%f \n",sum);
    return 0;
}