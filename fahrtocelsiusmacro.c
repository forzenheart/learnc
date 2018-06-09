#include <stdio.h>

#define LOWER 0
#define UP 300
#define STEP 20


int main() {
    int fahr;

    for(fahr=LOWER; fahr <= UP; fahr+=STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }

    char c = '1';
    char *pc = &c;
    putchar(*pc);
    putchar('\n');
}
