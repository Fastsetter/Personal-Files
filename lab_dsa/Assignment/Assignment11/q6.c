#include<stdio.h>


int main(){
 
 
    int n;
    scanf("%d",&n);

    int *p;
    p=&n;
    printf("The address of %d is %d\n",*p,p);
 
    return 0;
}