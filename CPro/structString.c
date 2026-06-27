#include <stddef.h>
#include <stdio.h>

size_t strLen (const char* s) {
    size_t count = 0;
    while (*(s + count) != '\0')
        ++count;
    return count;
}


int main () {

    char* s    = "Hello";
    char str[] = "World!";
    printf ("Size of S is : %zu\n", strLen (s));
    printf ("%zu\n", strLen (str));
    return 0;
}
