#include <stdio.h>

int main(){
    int hcf=1;
    int a=1,b=1;
    printf("Enter two numbers (space separated): ");
    scanf("%d %d",&a,&b);
    int smallest= a>b?a:b;
    for (int i=1;i<=smallest;i++){
        if (a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("%d \n",hcf);
}