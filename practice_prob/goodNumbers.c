#include<stdio.h>


int goodNumbers(int n){

    if(n-1==0) return 5;
    int k=((n-1)%2==0)?5:4;
    return k*goodNumbers(n-1);
}

// 0 1 2
// 5 4 5

int main(){
 
 
    int n;
    scanf("%d",&n);
    printf("%d\n",goodNumbers(n));
 
    return 0;
}