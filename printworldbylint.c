#include <stdio.h>

#define IN 0
#define OUT 1

int main() {
    int input, state;

    state = OUT;
    while (EOF != (input = getchar())) {
        if ('\t' == input || '\n' == input || ' ' == input) {
            if (IN == state) {
                putchar('\n');
            }
            state = OUT;
        } else {
            putchar(input);
            state = IN;
        }

    }
}
