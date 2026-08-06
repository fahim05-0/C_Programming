#include <stdio.h>
    int main (){
        int n;
        printf ("input  your intrger :");
        scanf("%d",&n);
            int r=0;
            int ld=0;
            while(n>0){
                ld=n%10;
                r=r*10+ld;
                n=n/10;
            }
            printf("Digits in your intrger is %d",r);
        

        return 0;
    }