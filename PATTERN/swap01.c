// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include<stdio.h>
int main (){
    int n,digit;
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i%2==0)digit=0;
        else digit=1;
        for (int j=1;j<=i;j++){
            printf("%d ",digit);
            if(digit==0) digit=1;
            else digit =0;
        
         }

        printf("\n");
    }
    return 0;
}