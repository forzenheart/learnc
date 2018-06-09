#include <stdio.h>

#define IN 0
#define OUT 1

int main() {
    int input, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while (EOF != (input = getchar())) {
        if ('\n' == input) {
            ++nl;
            state = OUT;
        } else if (' ' == input || '\t' == input) {
            state = OUT;
        } else {
            if (OUT == state) {
                state = IN;
                ++nw;
            }
        }
        ++nc;
    }

    printf("line %d word %d chars %d\n", nl, nw, nc);
}

