#include<stdio.h>
#define endl printf("\n")
enum foo{
    foo_1 = 0,
    foo_2,
    foo_3
};


static int squares[] = {
    4,
    9,
    16
};

// You can do it like this to sort of create a table.
static char caseConvert[]={
    ['a']='A',
    ['b']='B',
    ['c']='C'
};



int main(){

    printf("%d\n",squares[foo_2]);
    printf("%d\n",squares[foo_1]);
    printf("%d\n",squares[foo_3]);
    endl;
    printf("%c\n",caseConvert['b']);
    printf("%c\n",caseConvert['a']);
    printf("%c\n",caseConvert['c']);


    

    return 0;
}
