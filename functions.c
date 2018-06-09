#include <stdio.h>

#define LOWER 0
#define UP 300
#define SETUP 20

double fahrtocelsius(int fahr);

int main() {
        int i;
        for (i = LOWER; i <= UP; i+=SETUP) {
            printf("%3d\tto%6.1f\n", i, fahrtocelsius(i));
        }

}

double fahrtocelsius(int fahr) {
    return (5.0 / 9.0 * (fahr - 32.0));
}
