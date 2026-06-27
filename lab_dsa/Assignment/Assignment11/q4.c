#include<stdio.h>
#include<string.h>

int main(){
    int n;scanf("%d",&n);
    char s[1000];
    char s2[1000];

    fgets(s,1000,stdin);
    int i=0;
    while(s[i]!='\0'){
        s2[i]=s[i];
        i++;
    }
    i=0;
    while(s2[i]!='\0'){
        printf("%c",s2[i]);
        i++;
    }
    
 
    return 0;
}