#include <stdio.h>

#define NOBLANK 'a'

int main() {
    int input, lastinput;

    lastinput = NOBLANK;
    while (EOF != (input = getchar())) {
        if (' ' != input) {
            putchar(input);
        } else if (' ' != lastinput){
            putchar(input);
        }
        lastinput = input;
    }
}
