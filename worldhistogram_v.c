#include <stdio.h>

#define MAX_WORLD_LENGTH 1024
#define IN 0
#define OUT 1

int main() {
    int i, j, input, maxlen, maxcount, state, worldLen;
    int worldLenMap[MAX_WORLD_LENGTH];

    // 初始化状态
    maxlen = maxcount = worldLen = 0;
    state = OUT;
    for (i = 0; i <= MAX_WORLD_LENGTH; ++i) {
        worldLenMap[i] = 0;
    }

    while (EOF != (input = getchar())) {
        if ('\n' == input || '\t' == input || ' ' == input) {
            if (IN == state) {
                ++worldLenMap[worldLen];
                if (worldLenMap[worldLen] > maxcount) {
                    // 收集单词长度出现的最大次数
                    maxcount = worldLenMap[worldLen];
                }
                if (worldLen > maxlen) {
                    // 收集最长单词长度
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

    for (i = 0; i <= maxlen; ++i) {
        if (0 < worldLenMap[i]) {
            printf("%3d |", i);
            for (j = 0; j < maxcount; j++) {
                if (j < worldLenMap[i]) {
                    printf("*");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
