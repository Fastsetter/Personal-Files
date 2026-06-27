#include <stdio.h>


int main(){

    int a=1,b=1;
    int lcm=a*b;

    printf("Enter two numbers (space separated): ");
    scanf("%d %d",&a,&b);
    int largest=a>b?a:b;
    for(int i=largest;i<=a*b;i++){
        if (i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    } 
    printf("%d",lcm);

    return 0;
}