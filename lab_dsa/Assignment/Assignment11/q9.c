#include<stdio.h>


int main(){
 
 
    int n;
    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];
    i=0;
    while(i<5){
        printf("%d ",*p);
        p++;
        i++;

    }
    
 
    return 0;
}