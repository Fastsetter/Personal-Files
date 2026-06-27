#include <stdio.h>
#include <stdlib.h>

void f2 (void* main);
void f1 (void* main) {
    int diff = (char*)main - (char*)&f1;
    printf ("%d ", diff);
    f2 (main);
}


void f2 (void* main) {
    int diff = (char*)main - (char*)&f2;
    printf ("%d ", diff);
    f1 (main);
}

int main () {

    f2 ((void*)&main);
    return 0;
}
