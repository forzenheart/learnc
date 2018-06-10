#include <stdio.h>

//  行尾最多空格数
#define MAXLINE 1000

int main() {
    // 用于存储空格和tab
    int c, i;
    char spacebuffer[MAXLINE];
    int len;
    int onlySpace;

    len = 0;
    onlySpace = 1;
    while (EOF != (c = getchar())) {
        if ('\t' == c || ' ' == c) {
            if (MAXLINE - 1 > len) {
                // 替换为 * 方面查看
                spacebuffer[len] = '*';
                ++len;
            }

            if (c == '\t') {
                onlySpace = 0;
            }

        } else {
            if ('\n' != c) {
                spacebuffer[len] = '\0';
                if (onlySpace) {
                    printf("%s", spacebuffer);
                }
            }
            onlySpace = 1;
            len = 0;
            putchar(c);
        }
    }
    
    return 0;
}

