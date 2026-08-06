// 1
// 2 3
// 4 5 6
#include<stdio.h>
int main (){
    int n,digit=1;
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",j);
            digit+=1;
         }

        printf("\n");
    }
    return 0;
}