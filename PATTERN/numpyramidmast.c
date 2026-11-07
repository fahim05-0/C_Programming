//    1                    1
//   121                   12      1
//  12321   = space code + 123   + 21
// 1234321                 1234    321  
#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUM OF LINES :");  
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for( int j=1;j<=i;j++){
            printf("%d",j);
        }
        for (int d=i-1;d<=i-1;d--){
            if(d<=0)
                break;
            printf("%d",d);
        }
        printf("\n");
    }
    return 0;
}
