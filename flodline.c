#include <stdio.h>

// 行宽
#define LINEWIDTH 5
#define MAXLINE 1000

int getline(char line[], int maxline);
void cutline(char line[], int length);
int get_space_pos(char line[], int length);


int main() {
    int inputlen;
    char input[MAXLINE];
    char test[] = "1234567";
    printf("%s -> %d\n", test, get_space_pos(test, 8));
    char test1[] = "12 4567";
    printf("%s -> %d\n", test1, get_space_pos(test1, 8));
    return 0;

    inputlen = 0;
    while (0 < (inputlen = getline(input, MAXLINE))) {
        if (LINEWIDTH < inputlen) {
            cutline(input, inputlen);
        } else {
            printf("%s", input);
        }
    }

    return 0;
}


void cutline(char line[], int length) {
    int i;
    return;

    for (i = 0; i < length; ++i) {
        // 处理当前行未超过行宽的字符
        if (i < LINEWIDTH) {
            if (' ' == line[i]) {
                cutline(&line[i], length - i);
                putchar('*');
            }
            else {
                putchar(line[i]);
            }
        // 递归处理剩下的字符
        } else {
            putchar('\n');
            cutline(&line[i], length - i);
            break;
        }
    }
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
    line[i] = '\0';
    return i;
}

int get_space_pos(char line[], int length) {
    // 获取最后一个非空格字符的位置
    int i;
    for (i = length; i >= 0; --i) {
        if (' ' == line[i]) {
            break;
        }
    }
    return i;
}
