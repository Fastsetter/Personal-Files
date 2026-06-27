#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<stdint.h>
#define endl printf("\n") 

// dereferencing void pointer raises and error becaues the datatype the pointer is pointing to is unkown to the compiler and thus it does not know how many bytes to read;



void map(void* xs,size_t sizeN, size_t sizeEle,void (*MapToFunc)(void*)){
    uint8_t *base_as_bytes = (uint8_t*)xs;
    void* it = xs;
    for(size_t i=0;i<sizeN;i++){
        MapToFunc(&base_as_bytes[i*sizeEle]);
    } 

}

void square(void* x){
    int* p = (int*)x;
    *p = (*p)*(*p);
} 


int main(){


    int arr[] = {1,2,3,4,5,6};
    map(arr,5,sizeof(int),square);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);endl; 
    return 0;
}