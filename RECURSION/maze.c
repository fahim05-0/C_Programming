#include<stdio.h>
int maze (int r, int c){
    int rightWays=0,downWays=0;
    
    if(r==1 && c==1) return 1;
    
    if (r==1)
        rightWays+=maze(r,c-1);
    if(c==1)
        downWays+=maze(r-1,c);
    if (r>1 && c>1){
        rightWays+=maze(r,c-1);
        downWays+=maze(r-1,c);
    }
    
    int totalWays=rightWays + downWays;
    return totalWays;
}   
int main(){

int r,c;
    printf("enter num of rows :");
    scanf("%d", &r);
    printf("enter num of columns :");
    scanf("%d", &c);

    int out=maze(r,c); 

    printf(" NUM OF WAYS is %d",  out);

    return 0;
}