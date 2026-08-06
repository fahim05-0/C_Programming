// 100.000000 ,50.000000 ,25.000000 ,12.500000 ,6.250000 ,n terms for 100/2
#include<stdio.h>
int main(){
    int n;
    float start   =100.00;

    printf("Enter n ::");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        
        printf("%f ,",start);
        start=start/2;
    }

return 0;  
}