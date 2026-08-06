#include<stdio.h>
#include<string.h>
int main(){
    char str [100];
    puts("ENTER A STRING :");  // AUTOMATICALLY GIVES A ENTER NEW LINE 
    scanf("%[^\n]s",str);
    int n=0,k=0;
    while (str[k]!=0){
        n++;
        k++;
    }
    for (int i=0,j=n-1;i < j;i++ ,j--){
        char temp =str [i];
        str [i ]=str[j];
        str[j]= temp;
    }
    puts("REVERSE STRING IS ");
    puts(str);

}