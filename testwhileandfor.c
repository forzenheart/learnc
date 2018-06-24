#include <stdio.h>


int main() {
    int i = 5, j = 5;

    while (0 < i--) {
        printf("%d\n", i);
    }
    putchar('\n');

    for (;j > 0;--j) {
        printf("%d\n", j);
    }
    return 0;
}
