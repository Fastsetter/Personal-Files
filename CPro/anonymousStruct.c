#include <stddef.h>
#include <stdio.h>

struct vec {
    int x;
    int y;
};
int scaleSum (int scalar, struct vec v) {
    return scalar * v.x + scalar * v.y;
}

int arraySum (int* arr, int size) {
    int count = 0;
    for (size_t i = 0; i < size; ++i) {
        count += arr[i];
    }
    return count;
}

int main () {

    int result = scaleSum (2, (struct vec){ 4, 5 }); // you can create a struct like this and pass it to the function without declaration of it;
    printf ("%d\n", result);

    int ans = arraySum ((int[]){ 1, 2, 3, 4, 5 }, 5); // same with the array;
    printf ("%d\n", ans);


    return 0;
}
