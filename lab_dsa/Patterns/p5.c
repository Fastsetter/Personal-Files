#include <stdio.h>

int main(){

    int n;scanf("%d",&n);
    int r=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(j<r){
                printf(" ");
            }
            else{
                printf("* ");
            }
        }
        if(r>n){
            break;
        }
        printf("\n");
        r+=2;
    }

    return 0;
}