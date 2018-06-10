#include <stdio.h>

#define MAXLINE 10
#define LONGLINE 5

int getline(char line[], int limit);

int main() {
    int len;  // 当前输入行长度
    char line[MAXLINE];

    while (0 < (len = getline(line, MAXLINE))) {
        if (LONGLINE < len) {
            printf("%d, %s\n", len, line);
        }
    }

}


int getline(char line[], int limit) {
    int input, i;

    for(i = 0; i < limit - 1 && EOF != (input = getchar()) && '\n' != input; ++i) {
        line[i] = input;
    }

    if ('\n' == input) {
        line[i] = input;
        ++i;
    }
    line[i] = '\0';

    return i;
}
