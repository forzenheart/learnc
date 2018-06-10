// 颠倒字符串
#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int limit);

int main() {
    int len, i;
    char line[MAXLINE];

    while (0 < (len = getline(line, MAXLINE))) {
        /*printf("%s", line);*/
        for (i = len - 2; i >= 0; --i) {
            putchar(line[i]);
        }
        printf("\n");
    }

    return 0;
}

int getline(char line[], int limit) {
    int i;
    int c;

    for (i = 0; i < limit - 1 && EOF != (c = getchar()) && '\n' != c; ++i) {
        line[i] = c;
    }
    if ('\n' == c) {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';

    return i;
}
