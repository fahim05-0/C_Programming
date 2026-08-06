// 50 ,47 ,44 ,41 ,38 ,35 ,32 ,29 ,26 ,23 ,20 ,17 ,14 ,11 ,8 ,5 ,2 ,(if n=50)
#include<stdio.h>
int main(){
    int n,product=3;
    printf("Enter n ::");
    scanf("%d",&n);
    for (int i=n;;i-=3){
        
        
        if(i<0)
        break;
        printf("%d ,",i);
    }

return 0;  
}