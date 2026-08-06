//with extra array space comp O(n)
#include<stdio.h>
int main(){
    int a[9]={5,0,2,0,0,4,1,3,0};
    int ans[9];
    int idx =0;
    for (int i=0 ; i<9 ;i++){
        if (a[i]!=0){
            ans[idx]=a[i];
            idx++;
        }
    }
    while(idx<9){
        ans[idx]=0;
        idx++;
        }
    
    printf("\nYOUR ARRAY IS\n");
    for(int i =0 ; i<9 ;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}