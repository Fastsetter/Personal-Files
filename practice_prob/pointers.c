#include<stdio.h>


int main(){
 
 
    int *p;
    int arr[5]={1,5,3,9,76};

    p=&arr[0];
    printf("%d \n",*p);
    printf("%d\n",*p+1);
    printf("%d\n",*(p+1));
    
    *p++;
    printf("%d \n",*p);
    (*p)++;
    printf("%d \n",*p);
    p++;   
    printf("%d \n",*p);
 
    return 0;
}