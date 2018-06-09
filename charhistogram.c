#include <stdio.h>
#include <ctype.h>

// 最不同的字符种类
#define MAX_CHAR 128

int main() {
    int input, i, j;
    int maxcount;  // 字符出现的次数
    int cc[MAX_CHAR];  // 统计字符出现的次数

    // 初始化数组
    for(i = 0; i < MAX_CHAR; ++i) {
        cc[i] = 0;
    }

    maxcount = 0;
    while (EOF != (input = getchar())) {
        if (input < MAX_CHAR) {
            ++cc[input];
            if (maxcount < cc[input]) {
                maxcount = cc[input];
            }
        }
    }
    printf("%d\n", maxcount);


    for (i = 0; i < MAX_CHAR; ++i) {
        if (0 < cc[i] && isprint(i)) {
            printf("%c |", i);
            for ( j = 0; j < maxcount; ++j) {
                if (j < cc[i]) {
                    printf("*");
                }
            }
            printf("\n");
        }
    }


    return 0;
}
