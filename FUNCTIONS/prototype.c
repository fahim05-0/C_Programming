#include <stdio.h> 
int main (){
    void fun();    //proto type 
    fun ();        // calling 
}
void fun (){          
    printf("hello");
    return;
}





int Fact(int n){
    int  fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
   }
   return fact;
}
int nCr(int n,int r){
    
    int fact1=Fact(n);
    int fact2=Fact(r);
    int fact3=Fact(n-r);
    long combination=fact1/(fact2*fact3);

    return combination;

}