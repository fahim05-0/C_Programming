//always time complexcity O(n^2)
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){
    printf("\nENTER SIZE OF ARRAY (positive) : ");
    int n;
    scanf("%d",&n);
    int a[n];

    for (int i=0 ; i<n ; i++){
        printf("\nENTER NUM %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nYOUR ARRAY IS\n");
    for(int i =0 ; i<n ;i++){
        printf("%d ",a[i]);
    }

    for (int i= 0 ; i<n-1 ; i++){
        int min=INT_MAX;
        int idx=-1;
        
        for (int j=i ; j<n-1 ; j++){
            if(a[j]<min){
                min=a[j];
                idx=j;
            }
            int temp =a[idx];
            a[idx]=a[i];
            a[i]=temp;
        } 
    }

    printf("\nYOUR sorted ARRAY IS\n");

    for(int i =0 ; i<n ;i++){
        printf("%d ",a[i]);
    }

    
    return 0;
}
//UNSTABLE SORT