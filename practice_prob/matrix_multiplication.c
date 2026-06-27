#include<stdio.h>
int* col_mul(int arr1[],int arr2[]);

int main(){
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    int arr1[m][n];
    int arr2[n][p];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<p;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    // AB = [Ab1 | Ab2 | ... ]

    

 
    return 0;
}

int* col_mul(int arr1[],int arr2[]){
    int s1=sizeof(arr1)/sizeof(int);
}
