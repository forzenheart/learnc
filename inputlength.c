#include <stdio.h>


int main() {
    int len, input;

    len = 0;
    while (EOF != (input = getchar())) {
        if ('\n' != input) {
            ++len;
            putchar(input);
        } else {
            ++len;
            printf("\nlength: %d\n", len);
            len = 0;
        }
    }
    return 0;
}
