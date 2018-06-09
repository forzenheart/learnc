#include <stdio.h>

int main() {
    int input;

    while (EOF != (input = getchar())) {
        if ('\t' == input) {
            putchar('\\');
            putchar('t');
        } else if ('\b' == input) {
            putchar('\\');
            putchar('b');
        } else if ('\\' == input) {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(input);
        }
    }
}
