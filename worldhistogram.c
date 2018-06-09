#include <stdio.h>

#define MAX_WORLD_LENGTH 1024

#define IN 0
#define OUT 1
#define SYMBOL '#'
#define LINE '-'

int main() {

    int worldLenMap[MAX_WORLD_LENGTH];
    int i, j, input, state, worldLen, maxlen, maxcount;

    state = OUT;
    for (i = 0; i <= MAX_WORLD_LENGTH; ++i) {
        worldLenMap[i] = 0;
    }

    maxcount = maxlen = worldLen = 0;
    while (EOF != (input = getchar())) {
        if ('\t' == input || '\n' == input || ' ' == input) {
            if (IN == state) {
                ++worldLenMap[worldLen];
                if (worldLenMap[worldLen] > maxcount) {
                    maxcount = worldLenMap[worldLen];
                }
                if (worldLen > maxlen) {
                    maxlen = worldLen;
                }
                worldLen = 0;
            }
            state = OUT;
        } else {
            state = IN;
            ++worldLen;
        }
    }
    for (i = maxcount; i > 0; --i) {
        for (j = 0; j <= maxlen; ++j) {
            if (0 != worldLenMap[j]) {
                if (worldLenMap[j] >= i) {
                    printf(" ###");
                } else {
                    printf("    ");
                }
            }
        }
        putchar('\n');
    }
    /*putchar('\n');*/
    /*for (i = 0; i <= maxlen; ++i) {*/
        /*if (0 != worldLenMap[i]) {*/
            /*printf("  %2d", worldLenMap[i]);*/
        /*}*/
    /*}*/
    putchar('\n');
    for (i = 0; i <= maxlen; ++i) {
        if (0 != worldLenMap[i]) {
            printf("  %2d", i);
        }
    }
}
