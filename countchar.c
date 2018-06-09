#include <stdio.h>

int main() {
    long count = 0;

    while (EOF != getchar()) {
        ++count;
    }
    printf("%ld", count);
}
