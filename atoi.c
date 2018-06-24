#include <stdio.h>


int myatoi(const char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        printf("%d\n", n);
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int main() {
    printf("%d\n", myatoi("1234"));
    return 0;
}
