#include<stdio.h>

void solveHanoi(int n,char from,char using,char to)
{

    if(n==1){
        printf("Move %d from %c to %c\n",n,from,to);
        return;
    }
    solveHanoi(n-1,from,to,using);
    printf("Move %d from %c to %c\n",n,from,to);
    solveHanoi(n-1,using,from,to);

}




int main(){
    

    solveHanoi(2,'A','B','C');
    
 
    return 0;
}