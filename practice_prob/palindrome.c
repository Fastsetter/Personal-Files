#include<stdio.h>


int main(){
 
 
    int n;scanf("%d",&n);

    int n2=n;
    int rev=0;
    while(n2>0){
        rev=rev+n2%10;
        n2=n2/10;
        rev=rev*10;

    }
    rev=rev/10;
    // printf("%d",rev);
    if(n==rev){
        printf("The number is a palindrome number\n");
    }
    else{
        printf("The number is not a palindrome number \n");
    }
 
    return 0;
}