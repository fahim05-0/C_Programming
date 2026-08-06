#include<stdio.h>
int main(){
    int n;
    //printf("enter a integer:");
   //scanf("%d",&n);
   int x=4,y=0;
   while(x>=y){
    x--;
    y++;
    if(x==y)
    continue;
else
 printf("\n%d%d",x,y);
   }
   
    return 0;
}