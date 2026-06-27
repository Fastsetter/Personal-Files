#include<stdio.h>

int findelement(const int arr[],int c,int size);
void push_back(int arr[],int c,int size);

int main(void){ 
    // 1 2 4 5 3 2 1 4 8 3 2 1
    int n;scanf("%d",&n);
    int arr[n];
    int i=0;
    while(i<n){
        scanf("%d",&arr[i]);i++;
    }
    int size=n/2;
    int repeating_ele[size];
    i=0;
    while(i<size){
        repeating_ele[i]=0;i++;
    }
    i=0;
    while(i<n){
        int j=0;int freq=0;
        while(j<n){
            if(arr[i]==arr[j]){
                freq++;
            }
            j++;
        }
        if(!findelement(repeating_ele,arr[i],size) && freq>1){
            printf("The element %d occurs %d times in the array\n",arr[i],freq);
            push_back(repeating_ele,arr[i],size); 
        }
        freq=0;
        i++;
    }
    return 0;
}

int findelement(const int arr[],int c,int size){

    int i=0;
    while(i<size){
        if(arr[i]==c){
            return 1;
        }
        i++;
    }
    return 0;
}
void push_back(int arr[],int c,int size){
    int i=0;
    while(i<size){
        if(arr[i]==0){
            arr[i]=c;
            break;
        }
        i++;
    }
}
