// 1234
// 1234
// 1234
// 1234
#include<stdio.h>
int main (){
    int n,c;
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    printf("ENTER NUM OF COLUMNS :");
    scanf("%d",&c);

    for(int i=1;i<=n;i++){
        for (int j=1;j<=c;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}