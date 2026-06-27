#include <stdio.h>


int main(){

    for (int i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");
    int j=1;
    while (j<=10){
        printf("%d ",j);
        j+=1;
    }
    printf("\n");

    j=1;
    do{
        printf("%d ",j);
        j+=1;
    }while (j<=10);
    printf("\n");

    return 0;
}