#include<stdio.h>


int main(){
 
 
    FILE *p;

    p=fopen("./sample.txt","r+");

    if(p==NULL){
        printf("File not found");
        return 1;
    }
    char ch;
    while((ch=fgetc(p))!=EOF){
        putchar(ch);
    }
    fclose(p);
 
    return 0;
}