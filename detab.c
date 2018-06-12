/*编写程序,将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符终止位的地方。*/
/*假设制表符终止位的位置是固定的，比如每隔n列就会出现一个制表符终止位。n应该作为变量还是*/
/*符号常量呢？*/


#include <stdio.h>

int main() {
    int c;
    int len;
    int tabwidth = 10;

    len = 0;
    while (EOF != (c = getchar())) {
        if ('\t' == c) {
            while (tabwidth - len) {
                ++len;
                putchar('*');
            }
            len = 0;
        } else if ('\n' == c) {
            len = 0;
            putchar(c);
        } else {
            ++len;
            if (len == 8) {
                len = 0;
            }
            putchar(c);
        }
    }
    return 0;
}
