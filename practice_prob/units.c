#include<stdio.h>


int main(){
 
 
    int u;scanf("%d",&u);

    if (u<=100){
        printf("unit is less than 100");
    }else if(u<=200){
        printf("Unit is greater than 100 but less than 200");
    }else{
        printf("Unit is greater than 200");
    }
 
    return 0;
}