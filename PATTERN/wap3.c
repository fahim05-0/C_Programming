// *******
// *** ***
// **   **
// *     *
#include<stdio.h>
int main(){
    int n;
    
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    int nsb=1,nst=n;
    for(int i=1;i<=2*n-1;i++)
        printf("*");
    printf("\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<nst;j++)
            printf("*");
        for(int k=1;k<=nsb;k++)
            printf(" ");
        for(int j=1;j<nst;j++)
            printf("*");
        nst--;
        nsb+=2;
        printf("\n");

    }
    return 0;
}