// *****
//  ****
//   ***
//    **
//     *
#include<stdio.h>
int main(){
    int n;
    
    printf("ENTER NUM OF LINES :");
    scanf("%d",&n);
    int nsb=0,nst=n;
    for(int i=1;i<=n;i++){
        for (int s=1;s<=nsb;s++){
            printf(" ");
            
        }
        for(int j=1;j<=nst;j++){
            printf("*");
            
        }
        
        nsb++;
        nst--;
        printf("\n");
    } 
    
    return 0;
}
// #include<stdio.h>
// int main(){
//     int n;
    
//     printf("ENTER NUM OF LINES :");
//     scanf("%d",&n);
   
//     for(int i=1;i<=n;i++){
//         for (int s=1;s<=i-1;s++){
//             printf(" ");
            
//         }
//         for(int j=1;j<=n+1-i;j++){
//             printf("*");
            
//         }
        
        
//         printf("\n");
//     } 
    
//     return 0;
// }
