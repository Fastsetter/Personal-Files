#include<stdio.h>


int main(){
 
 
    int u;scanf("%d",&u);
    int n=u/100.1;

    switch(n){
        case 0:
            printf("unit is less than 100");
            break;
        case 1:
            printf("unit is greater than 100 but less than 200");
            break;
        default:
            printf("unit is greater than 200");
    }  
 
    return 0;
}