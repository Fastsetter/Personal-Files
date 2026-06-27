#include<stdio.h>
#include<string.h>

int main(){
 
    char s1[100],s2[100];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    
    int i=0,check=1;
    while(s1[i]!='\0'||s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            check=0;
            break;
        }
        i++;
    }
    if(check) printf("The strings are equal\n");
    else printf("The strings are not equal\n");
    
    
 
    return 0;
}