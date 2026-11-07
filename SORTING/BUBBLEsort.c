//time compexcity (n-1)+(n-2)+.....3+2+1=(n-1)n/2   =O(n^2/2-n/2)  =O(n^2)  | if best case O(n)  && space complexcity O(1)
#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("\nENTER SIZE OF ARRAY (positive) : ");
    int n;
    scanf("%d",&n);
    int a[n];

    for (int i=0 ; i<n ; i++){
        printf("\nENTER NUM %d:",i+1);
        scanf("%d",&a[i]);
    }

    for (int i= 0 ; i<n-1 ; i++){
        bool flag = true;             //assume array is sorted

        for (int j=0 ; j<n-i-1 ; j++){

            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag = false;
            }
        }
        if (flag==true) break;
    }

    printf("\nYOUR SORTED ARRAY IS\n");
    for(int i =0 ; i<n ;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
// STABLE SORT  