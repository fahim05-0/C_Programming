#include<stdio.h>
int main(){
    int a[9]={5,0,2,0,0,4,1,3,0};
    
    for(int i=0 ; i<9-1 ; i++){
        for(int j =0 ; j<9-i-1;j++){
            if(a[j]==0){
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    printf("\nYOUR ARRAY IS\n");
    for(int i =0 ; i<9 ;i++){
        printf("%d ",a[i]);
    }
    return 0;
}