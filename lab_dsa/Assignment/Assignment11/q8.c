#include<stdio.h>


int main(){
 
 
    int a,b,c;
    int *p,*q,*r;
    p=&a;q=&b;r=&c;

    scanf("%d %d %d",&a,&b,&c);

    int max;
    max=(*p>*q)?(*p>*r)?*p:*r:(*q>*r)?*q:*r;
    printf("The maximum of %d %d %d is %d",a,b,c,max);
    return 0;
}