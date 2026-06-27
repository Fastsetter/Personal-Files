#include<stdio.h>
// 4 + 3 + 2 + 1
// a b c a d d a f a;
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int i=0;
    char high_freq_char='a';
    int occ=-5000;
    while(str[i]!='\0'){
        int j=0;int count=0;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                count+=1;
            }
            j++;
        }
        if(count>occ){
            occ=count;
            high_freq_char=str[i];
        }
        i++;
    }
    printf("The Hightest frequency of character %c \nappears number of times: %d \n",high_freq_char,occ);
 
    return 0;
}