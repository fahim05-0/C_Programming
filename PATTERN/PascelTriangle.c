#include<stdio.h>


int fact(int n){

    if (n==1 || n==0)
        return 1;

    return n*fact(n-1);
}
int nCr(int n , int r){

    return ((fact(n))/(fact(r)*fact(n-r))) ;
}

int main (){
    int n;

    printf("\nEnter n :");
    scanf("%d",&n);

    for(int i=0 ; i<n ;i++){

        for(int j =0 ; j<n-1-i ; j++){
            printf("   ");
        }

        for(int j=0 ; j<=i ; j++){
            printf("%4d   ",nCr(i , j));
        }
        printf("\n");
    }

    return 0;
}









