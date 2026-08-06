#include<stdio.h>
#include<string.h>
int main(){
    typedef struct date  {
        int day;
        int month;
        int year;
    
    } date;
    date a,b;

    a.day=12;
    a.month =6;
    a.year= 2005;

    b.day=24;
    b.month=5;
    b.year=2005;

    if(a.day==b.day && a.month==b.month && a.year==b.year)   //a==b will  not work
        printf("same date");
    else
        printf("\nNOT SAME");
    return 0;
}