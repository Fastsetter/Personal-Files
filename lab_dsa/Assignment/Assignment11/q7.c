#include<stdio.h>


int main(){
 
 
    int a,b,*p1,*p2;
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    int sum=*p1+*p2;
    printf("the sum of two numbers is : %d\n",sum);
 
    return 0;
}