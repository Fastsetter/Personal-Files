#include <stdio.h>

long int factorial(int n);

int main(){

    int n;scanf("%d",&n);
    printf("Factorial of %d is : %ld",n,factorial(n));
    
}
long int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}