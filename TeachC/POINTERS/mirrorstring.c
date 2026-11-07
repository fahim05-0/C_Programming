#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str1[100],str2[100], *p1 ,*p2 ;
    printf("Enter the string :");

    gets(str1);

    p1=str1 + strlen(str1)-1;
    p2=str2;

while(p1 >= str1){   // *p2++=*p1--; also works 3 lines in one 
    *p2=*p1;
    p1--;
    p2++;
}

*p2='\0';

printf("\nMirrio \n");

printf("%s %s",str1,str2);

return 0;


}