#include<stdio.h>


int main(){
    int n;scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[2*n];
    for(int i=0;i<2*n;i++){
        arr3[i]=(i<n)?arr1[i]:arr2[i-n];
    }
    for(int i=0;i<2*n;i++){
        printf("%d ",arr3[i]);
    }
    
 
    return 0;
}