#include <stdio.h>

typedef enum boolean{
    NO,
    YES
}BOOL;

enum bl {
    N,
    Y
};

int main() {
    printf("%d\n", NO);
    printf("%d\n", YES);

    enum boolean my = NO;
    printf("my: %d\n", my);

    BOOL u = YES;
    printf("u: %d\n", u);
    return 0;
}
