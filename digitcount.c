#include <stdio.h>
    int main (){
        int n;
        printf ("input  your intrger :");
        scanf("%d",&n);
            int count =0;
            while(n!=0){
            
                n=n/10;
                count++;
            }
            printf("Digits in your intrger is %d",count);


        return 0;
    }