#include <stdio.h>

int main(){

	int fahr;

    for(fahr=300; 0 <= fahr; fahr=fahr-20) {
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));

    }
}
