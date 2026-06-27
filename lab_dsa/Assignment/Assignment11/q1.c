#include<stdio.h>
#include <string.h>

int main(){

    char s[1000];
    printf("Enter a sentence: ");
    fgets(s,1000,stdin);
    int c_alpla=0,c_dig=0,c_special=0;
    int i=0;
    while(s[i]!='\0'){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) ) c_alpla++;
        else if (s[i]>=48 && s[i]<=57) c_dig++;
        else if(s[i]!=32) c_special++;

        i++;
    }
    printf("The number of alphabets are: %d \n",c_alpla);
    printf("The number of digits are: %d \n",c_dig);
    printf("The number of special characters are: %d \n",c_special-1);
 
    return 0;
}