#include <stdio.h>

int main()
{
    int input, space, tab, newline;
    space = 0;
    tab = 0;
    newline = 0;

    /*while (EOF != (input = getchar())) {*/
        /*if (' ' == input) {*/
            /*++space;*/
        /*} else if ('\n' == input) {*/
            /*++newline;*/
        /*} else if ('\t' == input) {*/
            /*++tab;*/
        /*}*/
    /*}*/

    for (;EOF != (input = getchar());) {
        if (' ' == input) {
            ++space;
        } else if ('\n' == input) {
            ++newline;
        } else if ('\t' == input) {
            ++tab;
        }
    }
    printf("Space: %d\n", space);
    printf("Tab: %d\n", tab);
    printf("NewLine: %d\n", newline);

}
