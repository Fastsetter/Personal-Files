#include<stdio.h>


int main(){
 
 
    int arr[5]={4,-9,56,0,44};

    int* arr_p[5]; // array of pointers;

    // we could make each pointer in arr_p to point to respective int element of arr.

    int i=0;
    for(i=0;i<5;i++){
        arr_p[i]=&arr[i];
    }
    for(i=0;i<5;i++){
        printf("arr[%d] is %d \n",i,*arr_p[i]);
    }

 
    return 0;
}