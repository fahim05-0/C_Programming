// * * * * * *
// *         *
// *         *
// * * * * * *
#include<stdio.h>
int main (){
    int n,c;
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    printf("ENTER NUM OF COLUMNS :");
    scanf("%d",&c);

    for(int i=1;i<=n;i++){
        
        for (int j=1;j<=c;j++){
            if ((i==1||j==1)||(i==n||j==c))
                printf("* ");
            else
                printf("  ");    //DOUBLE SPACE FOR MATCHING 
        }
        printf("\n");
    }
    return 0;
}
