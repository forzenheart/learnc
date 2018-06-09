#include <stdio.h>

int main() {
    int c, nl;

    nl = 0;
    while (EOF != (c = getchar())) {
        if ('\n' == c) {
            ++nl;
        }
    }
    printf("%d\n", nl);
}
