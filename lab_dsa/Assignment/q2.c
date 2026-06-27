#include <stdio.h>

int main(){

    for (int i=10;i>=1;i--){
        printf("%d ",i);
    }
    int j=10;
    printf("\n");
    while (j>=1){
        printf("%d ",j);
        j-=1;
    }
    printf("\n");
    j=10;
    do
    {
        printf("%d ",j);
        j-=1;
    } while (j>=1);
    
    return 0;
}