#include <errno.h>
#include <stdio.h>
#include <string.h>


int main() {

    errno;
    int n;
    scanf("%d", &n);

    printf("%s\n", strerror(ENOENT));
    printf("%s\n", strerror(EIO));

    return 0;
}
