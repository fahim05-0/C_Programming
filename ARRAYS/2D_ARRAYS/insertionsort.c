#include<stdio.h>
#include<limits.h>
int main(){
    int a[5]={5,3,2,1,4};

    for(int i=0;i<5;i++){
        int min=INT_MAX;
        int idx=-1;

        for(int j=i ;j<5 ;j++){
            if(a[j]<min){
               
               
                min = a[j];
                idx=j;
            }
            int temp=a[idx];
            a[idx]=a[i];
            a[i]=a[idx];
            
        }
    }
    for (int i=0 ; i<5  ;i++){
        printf("%d ",a[i]);

    }
    return 0;
    

}