//HOW MANY NUMBERS ARE THERE ABBOVE X IN THE ARRAY
#include<stdio.h>
int main(){
    int n,count=0,x;

    printf("\nENTER SPECIFIC NUMBER\n");
    scanf("%d",&x);

    printf("enter num of elements:");
    scanf("%d",&n);

    int arr [n];
    for(int i=0;i<n;i++){
        printf("\nenter element num %d :",i+1);
        scanf ("%d",& arr[i]);
        
        
        if(arr[i]>x)
        count++;
        
    }
    
         printf("\n%d numbers are above %d\n",count,x);

    return 0;
}