// efficient than loop method
#include<stdio.h>
int main(){
    int a [8]={1,2,3,4,5,8,9,10};
    int target =8;
    int i=0;
    int j=8-1;
    while(i<j){
        if (a[i]+a[j]==target){
        printf("Target found %d & %d makes it ",a[i],a[j]);
            break;
        }
        else if(a[i]+a[j]>target){
        j--;
        }
        else if(a[i]+a[j]<target){
        i++;
        }
    }
    return 0;

}