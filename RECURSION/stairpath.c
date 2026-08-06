// 1,2 jump
#include<stdio.h>
int stair(int n){
    if (n==1||n==2) return n;
    
    return (stair(n-2)+stair(n-1));
}
int main(){
    int n;
    printf("enter num of stairs :");
    scanf("%d", &n);
    int r=stair(n);
    printf("WAYS OF CLIMBING %d STAIRS WITH ATMOST 2 STAIRS AT A TIME IS :%d", n ,r);
    return 0;
}