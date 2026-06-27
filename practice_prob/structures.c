#include<stdio.h>

struct student{
    char name[100];
    int rollnumber;
    int marks;
};

int main(){
 
    struct student s[3];

    for(int i=0;i<3;i++){
        gets(s[i].name);
        scanf("%d",&s[i].rollnumber);
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<3;i++){
        printf("Name of the student is : ");
        puts(s[i].name);
        printf("\nYour Roll No is : %d\n",s[i].rollnumber);

        printf("Your marks is : %d \n",s[i].marks);

    }



 
    
 
    return 0;
}