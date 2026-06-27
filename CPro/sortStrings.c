#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define endl printf("\n") 

void swap(void* a,void* b,int size){
    char buffer[100];
    memcpy(buffer,a,size);
    memcpy(a,b,size);
    memcpy(b,buffer,size);

}

void Quick_Sort(void* base,void* right,size_t n,int (*compfn)(const void*,const void*)){
    
    char* s = base;
    char* l = base;    
    char* r = right;  
    int i = 0;
    int j = (r-s)/n;
    if(i>=j) return ;
    while(i<j){
        if(compfn(l,right) < 0){
            l = l + n*sizeof(char);
            i = i + 1;
        }else if(compfn(r,right)>=0){
            r = r - n*sizeof(char);
            j = j - 1;
        }else{
            swap(l,r,n);
            l = l + n*sizeof(char);
            r = r - n*sizeof(char);
            i += 1;
            j -= 1;
        }
    }
    swap(s+n*i,right,n);
    Quick_Sort(base,l-n*sizeof(char),n,compfn);
    Quick_Sort(l+n*sizeof(char),right,n,compfn);

}

void my_qsort(void* base,size_t N,size_t n,int (*compfn)(const void*,const void*)){
    void*  right = (char*)base + (N-1)*n;
    Quick_Sort(base,right,n,compfn);
}

int compfnInt(const void* a,const void* b){
    return (*(const int*)a - *(const int*)b);
}

int compfnStr(const void* a, const void* b){
    return strcmp(*(const char**)a,*(const char**)b);
}


int main(int argc, char** argv){

    // int n;scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // my_qsort(&arr[0],n,sizeof(int),compfnInt); 
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }endl;
    // char* str[argc-1];
    // for(int i=0;i<argc-1;i++){
    //     str[i]=*(argv+i);
    // }
    char* strings[]={"hey","I","am","cS","student"};
    my_qsort(strings,5,sizeof(char*),compfnStr);
    for(int i=0;i<5;i++){
        puts(strings[i]);
    }
    return 0;
}