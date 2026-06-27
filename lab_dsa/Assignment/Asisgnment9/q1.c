#include<stdio.h>

int push_back(int *arr,int e);


int main(){
 
    // 1 2 3 1 1 4 5
    int n;scanf("%d",&n);
    int arr[n];
    int rep[n];int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                printf("%d ",j);
            }
        }
        count = 0;
    }
 
    return 0;
}