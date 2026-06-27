#include <stdbool.h>
#include <stdio.h>

struct data {
    char field1;   // size 1
    int field2;    // size 4
    double field3; // size 8

    //  the whole struct length should divide by its largest member;
};
struct foo {
    double a; // size 4
    bool b;   // size 1
};

int main () {

    struct data s;
    int val;
    printf ("Size of struct: %zu\n", sizeof (struct data));
    printf ("Size of foo: %zu\n", sizeof (struct foo));
    printf ("Adress of field1: %p\n", &s.field1);
    printf ("Hello%n\n", &val); // %n specifier stores the number of characters printed upto it and stores the value to the int* provided in the corresponding argument.
    printf ("%d\n", val);


    return 0;
}
