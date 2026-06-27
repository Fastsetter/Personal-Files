#include<stdio.h>
#include<limits.h>

int main(){
 
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int arr[n];
    int max=INT_MIN,min=INT_MAX,max_pos,min_pos;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            min_pos=i;
        }
        if(arr[i]>max){
            max=arr[i];
            max_pos=i;
        }
    }
    printf("The maximum number is: %d at position : %d\n",max,max_pos);
    printf("The minimum number is: %d at position : %d",min,min_pos);
    
    
    return 0;
}