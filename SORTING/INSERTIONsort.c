//time compexcity )  =O(n^2)  | if best case O(n)  && space complexcity O(1)  ,,STABLE SORT
#include<stdio.h>

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
    
    for(int i=0 ; i<n ; i++ ){
        int j=i;
        while(j>=1 && a[j]<a[j-1]){
            int temp =a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
       }
    }
    printf("\nYOUR sorted ARRAY IS\n");
    for(int i =0 ; i<n ;i++){
        printf("%d ",a[i]);
    }

return 0;
}