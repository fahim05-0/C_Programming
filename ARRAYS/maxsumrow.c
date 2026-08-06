#include<stdio.h>
 int main(){
    int arr [3][4]={1,2,3,1,0,5,0,2,9,0,0,3};

    int a=0,b=0,c=0;

    for (int i=0 ; i < 4 ;i++){
        a=a+arr[0][i];
        b=b+arr[1][i];
        c=c+arr[2][i];
    }

    if(a>b && a>c){
        printf("row 1 has largest sum %d ",a);
    }

    else if (a>b && c>a)
        printf("row 2 has largest sum %d",b);
    
    else 
        printf("row 3 has largest sum %d ",c);
    return 0;
 }