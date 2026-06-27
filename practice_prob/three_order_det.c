#include<stdio.h>


int main(){
 
 
    int arr[3][3];

    int i,j=0;

    while(i<3){
        while(j<3){
            scanf("%d",arr[i][j]);
            j++;
        }
        i++;
    }

    i=j=0;

    int det=0;
    int sign=1;
    while(j<3){
        int k=0;
        while(k<3){
            if(k==j) continue;

            det+=arr[0][j]*sign*(arr[1][j])
        }
    }
 
    return 0;
}