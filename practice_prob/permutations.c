#include<stdio.h>
void swap(char* a,char* b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void printPermutations(char* arr,int i,int n){
    int j,temp;
    
    if(i==n){
        for(j=0;j<=n;j++){
            printf("%c",arr[j]);
        }printf("\n");
    }else{
        j=i;
        while(j<=n){
            swap(arr+j,arr+i);
            printPermutations(arr,i+1,n);
            swap(arr+j,arr+i);
            j++;
        }
    }



}


int main(){
 
 
    char c[]={'a','b','c','d'};
    printPermutations(c,0,3);
 
    return 0;
}