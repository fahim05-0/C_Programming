#include <stdio.h>
    int main (){
        int n;
        printf ("input  your intrger :");
        scanf("%d",&n);
            int sum=0;
            int ld=0;
            for (int i=1;i<=n;i++){
                
                if(i%2==0){ 
                    sum =sum+ld;

                }
        
            
                
            }
            printf("your sum  is %d",sum);


        return 0;
    }