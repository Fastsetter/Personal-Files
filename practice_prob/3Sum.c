#include <stdio.h>


//


void sum3 (int* arr, int size) {

    int i = 0;
    while (i < size) {

        int j = i + 1;
        for (j; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    printf ("%d %d %d\n", arr[i], arr[j], arr[k]);
                }
            }
        }

        i++;
    }
}


int main () {

    int arr[] = { 0, -1, 2, -3, 1 };

    sum3 (arr, 5);


    return 0;
}
