#include <stdio.h>


int main(){

    int n=0;
    printf("Enter the value of n: ");

    scanf("%d",&n);
    int i=1;

    do{
        printf("%d X %d = %d \n",n,i,n*i);
        i+=1;
    }while (i<=10);





    return 0;
}