#include <stdio.h>


int main(){

    int n;scanf("%d",&n);
    char x=65;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%c ",x+i-1);
        }printf("\n");
    }

    return 0;
}