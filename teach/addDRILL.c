#include<stdio.h>
int main(){
    int r=0,w=0;
    for(int i=1 ; i<=10 ;i++){
        int x;
        printf("WHAT IS 23 + %d = ",i);
        scanf("%d",&x);

        if(x==23+i){
            r++;
            printf("\nRIGHT\n");
        }
        else{
            printf("\nWRONG\n");
            w++;
        }
    }
    printf("\n%d right ans & %d wrong",r,w);
    return 0;
}