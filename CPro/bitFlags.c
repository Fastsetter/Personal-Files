#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define endl printf('\n') 



typedef unsigned short flag_t;
#define flag1 (1<<0)
#define flag2 (1<<1)
#define flag3 (1<<2)

int modifyX(int x,bool square,bool divide, bool increase){
    if(square){
        x = x*x;
    } 
    if(divide){
        x = x / 2;
    }
    if(increase){
        x = x + 1;
    }
    return x;
}

// instead of doing all that with different boolean var we can do it with one integer var;

int modifyXsmart(int x,flag_t flag){

    if(flag & flag1){
        x = x*x;
    } 
    if(flag & flag2){
        x = x / 2;
    }
    if(flag & flag3){
        x = x + 1;
    }

    return x;
}


int main(){


    printf("%d\n",modifyXsmart(5,flag1)); // 25  
    printf("%d\n",modifyXsmart(5,flag1 | flag2)); //12
    printf("%d\n",modifyXsmart(5,flag1 | flag2 | flag3)); //13

    return 0;
}