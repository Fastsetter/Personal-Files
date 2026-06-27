#include<stdio.h>
#include<string.h>

int main(){
 
    
    int n;
    scanf("%d",&n);

    char s[n];
    scanf("%s",s);
    int i=0;
    while(s[i++]!='\0');
    printf("The length of the strings is : %d \n",i-1);
    return 0;
}