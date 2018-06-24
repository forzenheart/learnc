// 编写程序，将空格串替换为最少量的制表符和空格，
// 但要保持单词之间的间隔不变
// 注解:这里的空格串的意思是包含制表符和空格混合的
// 字符串

#include <stdio.h>

#define TABWIDTH 8

int main() {
    int c, nb, nt, pos;
    int temp;

    nb = nt = 0;

    for(pos = 1; (c = getchar()) != EOF; ++pos) {
        if (' ' == c) {
            if (pos % TABWIDTH != 0) {
                ++nb;
            } else {
                nb = 0;
                ++nt;
            }
        } else {
            // 将之前积累的制表符打印出来
            while (0 < nt--) {
                temp = TABWIDTH;
                for (;temp > 0; --temp)
                    putchar('$');
            }

            // 遇到一个制表符，只将此前的制表符打印出来
            if ('\t' == c) {
                nb = 0;
            } else {
                for (;nb > 0; --nb) {
                    putchar('*');
            }
            if ('\n' == c) {
                pos = 0;
            } else if ('\t' == c) {
                // ? 这里没搞懂
                pos = pos + (TABWIDTH - (pos-1) % TABWIDTH) - 1;
            }
            putchar(c);
        }
    }

    return 0;
}
