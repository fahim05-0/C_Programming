#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[5]={3,5,22,7,9};

    for(int i=0 ; i<5-1 ;i++){

        bool flag = true;

        for (int j = 0; j<5-i-1 ; j++){
            if (a[j]>a[j+1]){
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag= false;
            }
            
        }
        if(flag==true)break;
    }
    for (int i=0 ; i<5  ;i++){
        printf("%d ",a[i]);

    }
    return 0;
}