//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUM OF  odd LINES :");
    scanf("%d",&n);
    int nst=1,nsb=n/2,ml=(n/2)+1;
    for (int i=1;i<=n;i++){
        for( int j=1;j<=nsb;j++)
            
            printf(" ");
        for( int j=1;j<=nst;j++)
            printf("*");
        if(i<ml){
            nsb--;
            nst+=2;
        }
        else{
            nsb++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}