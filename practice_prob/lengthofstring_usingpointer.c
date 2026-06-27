#include<stdio.h>
#include<string.h>

int lenofstr(char* s,int len);

int main(){
 
 
    char s[1000];

    gets(s); // get input of string

    puts(s);
    int length=lenofstr(&s[0],0);
    printf("Length of string is : %d",length);

 
    return 0;
}

int lenofstr(char* s,int len){

    if(*s=='\0'){
        return len;
    }
    return lenofstr(s+1,len+1);
}