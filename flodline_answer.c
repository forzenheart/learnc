#include <stdio.h>


#define MAXCOL 10
#define TABINC 8

char line[MAXCOL];


int exptab(int pos);
int findblnk(int pos);
int newpos(int pos);
void printl(int pos);


int main() {
    int c, pos;

    pos = 0;
    while(EOF != (c = getchar())) {
        line[pos] = c;

        if ('\t' == c) {
            pos = exptab(pos);
        } else if ('\n' == c) {
            printl(pos);
            pos = 0;
        } else if (++pos >= MAXCOL) {
            pos = findblnk(pos);
            printl(pos);
            pos = newpos(pos);
        }
    }
    return 0;
}


void printl(int pos) {
    int i;
    for (i = 0; i < pos; ++i) {
        putchar(line[i]);
    }
    if (pos > 0) {
        putchar('\n');
    }
}

int findblnk(int pos) {
    while (pos > 0 && line[pos] != ' ') {
        --pos;
    }
    if (0 == pos) {
        return MAXCOL;
    } else {
        return pos+1;
    }
}


int exptab(int pos) {
    line[pos] = ' ';
    for (++pos; pos < MAXCOL && pos % TABINC != 0; ++pos) {
        line[pos] = ' ';
    }
    if (pos < MAXCOL) {
        return pos;
    } else {
        printl(pos);
        return 0;
    }

}


int newpos(int pos) {
    int i, j;

    if (pos <= 0 || pos >= MAXCOL) {
        return 0;
    } else {
        i = 0;
        for (j = pos; j < MAXCOL; ++j) {
            line[i] = line[j];
            ++i;
        }
        return i;
    }
}
