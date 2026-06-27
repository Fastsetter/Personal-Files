#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define endl printf ("\n")
typedef int (*comparisonFn) (const void*, const void*);

bool p (int a) {
    return a % 2 == 0;
}

/* Comparison function that most c-lib function expects must return three type
   of integers :
    1. Positive: x>y;
    2. Negative: x<y;
    3. Zero: x==y;
*/

int _binarySearch (void* base, size_t N, size_t n, void* target, comparisonFn c) {
    char* first = (char*)base;
    char* last  = first + (N - 1) * n;
    int i = 0, j = N - 1;
    while (i <= j) {
        int mid      = (i + j) / 2;
        char* midptr = (char*)base + mid * n;
        if (c (midptr, target) == 0)
            return mid;
        else if (c (midptr, target) > 0) {
            j    = mid - 1;
            last = midptr - n;
        } else {
            i     = mid + 1;
            first = midptr + n;
        }
    }
    return -1;
}

void print_if (int xs[10], bool (*predicate) (int)) {
    for (int i = 0; i < 10; i++) {
        if (predicate (xs[i])) {
            printf ("%d\n", xs[i]);
        }
    }
}
int compareInt (const void* x, const void* y) {
    return (*(int*)x - *(int*)y);
}
int compareChar (const void* x, const void* y) {
    return (*(char*)x - *(char*)y);
}
int main (void) {
    int xs[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // int (*foo_p)(int,int);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", xs[i]);
    // }endl;
    // qsort(xs,10,sizeof(int),comparisonFn);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", xs[i]);
    // }endl;

    int target;
    printf ("Enter the target value: ");
    scanf ("%d", &target);

    /*    int* p = (int*) bsearch(&target,xs,10,sizeof(int),comparisonFn);
        if(p!=NULL){
            printf("Found the value at : %d with value %d\n",p,*p);
        }else{
            printf("Could not find the value \n");
        }*/
    printf ("%d\n", _binarySearch (xs, 10, sizeof (int), &target, compareInt));
    char c[] = { 'a', 'b', 'e', 'f', 'h', 'x', 'y', 'z' };
    char targetChar;
    printf ("Enter character target: ");
    scanf ("%s", &targetChar);
    printf ("%d\n", _binarySearch (c, 8, sizeof (char), &targetChar, compareChar));
}

/* Local Variables: */
/* ##: nil */
/* End: */
