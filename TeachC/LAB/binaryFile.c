#include<stdio.h>
#include <stdlib.h>
int main (){

    int num[3];//={1 ,2 ,3};
    FILE *fp =fopen("binary.txt","wb");

    fwrite(num , sizeof(int) , 3 , fp) ;

    fclose(fp);
     printf("%d",num[0], num[1], num[2]);
    return 0;

}