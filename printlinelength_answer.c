#include <stdio.h>

// 最大输入长度
#define MAXLINE 10 

int getline(char line[], int lim);
void copy(char to[], char from[]);

int main() {
    int len;  // 当前行长度
    int max;  // 最大长度
    char line[MAXLINE];  // 当前输入行
    char longest[MAXLINE];  // 最长输入行

    max = 0;

    while (0 < (len = getline(line, MAXLINE))) {
        printf("%d, %s", len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }


    if (0 < max) {
        printf("%s", longest);
    }
    return 0;
}

int getline(char line[], int lim) {
    int input, i, j;

    //  REMEMBER 初始化
    j = 0;
    // i记录任意长度值
    for (i = 0; (input = getchar()) != EOF && '\n' != input; ++i) {
        // 尽可能多的输出内容
        if ( i < lim - 2 ) {
            line[j] = input;
            ++j;
        }
    }

    if ('\n' == input) {
        line[j] = input;
        ++j;
        ++i;
    }

    line[j] = '\0';

    return i;

}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while('\0' != (to[i] = from[i])) {
        ++i;
    }
}
