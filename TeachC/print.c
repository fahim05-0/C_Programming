#include<stdio.h>
int main(){
//         int x = 5;
// x++;
// printf("%d",x);
// x--;
// printf("%d",x);
// ++x;
// printf("%d",x);
// --x;
// printf("%d",x);
int x = 4, y = 0, z ;
while ( x >= 0 ) {
x-- ;
y++ ;
if ( x == y )
continue ;
else
printf ( "\n%d %d", x, y ) ;
}

// printf("\n%d", x==10);
    return 0;
}