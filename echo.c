#include <stdio.h>

int main() {
    /*int input;*/
    /*input = getchar();*/
    /*while (EOF != input) {*/
        /*putchar(input);*/
        /*input = getchar();*/
    /*}*/

    int input;
    while (EOF != (input = getchar())) {
        putchar(input);
    }
    printf("\n%d\n", getchar() != EOF);
    printf("\n%d\n", EOF);
}