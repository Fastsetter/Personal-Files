#include <stdio.h>  

int main(){
    int sum=0;
    int n=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d \n",sum);


    return 0;
}