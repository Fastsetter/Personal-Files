#include<stdio.h>
#include<limits.h>
int n_largest(int arr[],int n,int size);
int main(){
 
 
    int n,k;
    scanf("%d",&n);int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(k--){
        
    }
    int largest=n_largest(arr,INT_MAX,n);
    printf("The second largest element in the array is : %d\n",n_largest(arr,largest,n));       
 
    return 0;
}

int n_largest(int arr[],int n,int size){
    
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest && arr[i]<n){
            largest=arr[i];
        }
    }
    return largest;
}