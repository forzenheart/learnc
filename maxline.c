#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char from[], char to[]);

int main() {
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];
    int max;

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

int getline(char line[], int limit) {
    int c, i;

    for (i = 0; i < limit-1 && (EOF != (c = getchar())) && '\n' != c; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    return i;
}

void copy(char from[], char to[]) {
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
