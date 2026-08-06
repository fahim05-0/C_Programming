#include<stdio.h>
int main(){
    int n=333;
    int i=10;
    int idx=1;
    printf("GUESS THE NUMBER\n");
    while(i>0){
        int m;
        
        scanf("%d",&m);

        if(n==m){
            printf("\nRIGHT GUESS\nIt took %d guesses\n",idx);
            break;
        }

        else{
            if(m>n)printf("GUESS LOWER\n");
            if(m<n)printf("GUESS HOGHER\n");
        }

        i--;
        idx++;
    }
    return 0;

}