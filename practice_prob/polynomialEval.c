#include<stdio.h>


float pol(int* arr,int x,int d,int k){
    if(k>d) return 0;

    return arr[k]+x*pol(arr,x,d,k+1);
    
}

int main(){
 
 
    int arr[]={3,-2,1};
    float x=2.0;
    printf("%0.2f\n",pol(arr,x,2,0));
 
    return 0;
}