#include <stdio.h>
#include <math.h>

int main(){

        //     1 
        //   2 3 2
        // 3 4 5 4 3
        // 2*i-1 - 
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i+n-2;j++){
            if(j<n-i && j<=4){
                printf("   ");
            }
            else if(j<n-i && j>4){
                printf("  ");
            }
            else if ((2*i-1 - abs((n-1)-j))%10==0)printf("%d  ",2*i-1 - abs((n-1)-j));
            else{
                printf("%d ",2*i-1 - abs((n-1)-j));
            }
        }printf("\n");
    }

    return 0;
}