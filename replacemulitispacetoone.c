#include <stdio.h>


int main() {
    int input;
    int startspace = 0;

    while (EOF != (input = getchar())) {
        if (' ' == input) {
            startspace = 1;
        } else {
            if (startspace) {
                putchar(' ');
                startspace = 0;
            }
            putchar(input);
        }
    }
}
