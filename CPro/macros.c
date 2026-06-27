#include <stdio.h>

#define ADD(x, y) (x + y)
#define MUL(x, y) ((x) * (y))

// Multiline Macros need a backslash at the end \ ;

#define SUM(start, end)                     \
    do {                                    \
        int x = 0;                          \
        for (int i = start; i < end; i++) { \
            x += i;                         \
        }                                   \
        printf ("Sum is : %d\n", x);        \
    } while (0)
#define FOO(x, y) printf ("%s + %s = %d\n", #x, #y, (x + y))

#define NEWNAME(foo) new__##foo


#define GENERIC_ADD(type)              \
    type add_##type (type a, type b) { \
        return a + b;                  \
    }
GENERIC_ADD (int);
GENERIC_ADD (float);
int main () {

    // printf ("%d\n", ADD (2, 6));
    // printf ("%d\n", 2 * ADD (6, 8));
    // printf ("%d\n", MUL (5 + 3, 2));
    int x = 21; // compiler will say redefinition
    SUM (1, 11);
    int a = 61;
    int b = 8;
    FOO (a, b);

    int NEWNAME (foo) = 123;
    printf ("%d\n", new__foo);
    printf ("Sum of a+b is : %d\n", add_int (a, b));
    printf ("%f\n", add_float (6.9, 1.2));
    return 0;
}
