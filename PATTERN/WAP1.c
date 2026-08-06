// 1
// AB
// 123
// ABCD
#include<stdio.h>
int main (){
    int n,c;
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if(i%2!=0)
                printf("%d ",j);
            else
                printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}