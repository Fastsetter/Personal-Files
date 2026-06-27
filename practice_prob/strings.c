#include<stdio.h>
#include<string.h>
char str1[100];
char str2[100];
int main(void){
 
    // take input of string.

    // On success, fgets() returns str, a pointer to the buffer where the string is stored.

    while(!fgets(str1,100,stdin)){
        printf("You entered: %s",str1);
    }
    // copying contents of str1 to str2;

    char *pA;
    char *pB;

    pA=str1;
    pB=str2;

    putchar('\n');

    while(*pA!='\0'){
        *pB++=*pA++;
    }
    *pB='\0';
    puts(str2);
    return 0;
}