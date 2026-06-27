#include <stdio.h>

int main(){

    int n;scanf("%d",&n);
    int r=n-1;
    n=(n-1)/2+1;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n+2*i-1;j++){
            if(j<=r){
                printf("@");
            }
            else if(j<=n){
                printf("%d",count++);
            }
            else{
                printf("%d",--count);
            }
        }printf("\n");
        r-=2;
    }


    return 0;
}