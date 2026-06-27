#include <stdarg.h>
#include <stdio.h>

void foo (int count, ...) {
    va_list ap;
    va_start (ap, count);
    int x = va_arg (ap, int);
    int y = va_arg (ap, int);
    printf ("%d\n", x);
    printf ("%d\n", y);
    va_end (ap);
}

int main () {

    int a = 10;
    while (a <= 10) {

        printf ("%d\n", a);
    }
    foo (3, 9, 7);

    return 0;
}
