//HOW MANY PAIRS ARE THERE WHOSE SUM IS GIVEN X 
#include <stdio.h>

int main(){

    int n;
    
    printf("enter num of elements:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("\nenter element num %d :",i+1);
        scanf ("%d",& arr[i]);
    }
    int x;
    printf("ENTER THE EXPECTED SUM:\n");
    scanf("%d",&x);
    
    int count=0;
    for( int i = 0; i<n;i++){
      for (int j=i+1;j<n;j++){
          if(arr[i]+arr[j]==x){
             count++;
          }
      }
      
  }
  
    printf("\n%d PAIRS MAKING EXPECTED VALUE",count);

    return 0;
}