#include <stdio.h>

int main() {
    char P, Q;
    scanf("%c%c", &P, &Q);

    if (P == 'I' && Q == 'I') {
        printf("2\n");
    }else if (P == 'I' && Q == 'V') {
        printf("4\n");
    } else if (P == 'I' && Q == 'X'){
        printf("9\n");
    } else if (P == 'V' && Q == 'I') {
        printf("6\n");
    } else if (P == 'X' && Q == 'I') {
        printf("11\n");
    } else if (P == 'X' && Q == 'V') {
        printf("15\n");
    } else if (P == 'X' && Q == 'X') {
        printf("20\n");
    } else if (P == 'X' && Q == 'L') {
        printf("40\n");
    } else if (P == 'X' && Q == 'C') {
        printf("90\n");
    } else if (P == 'L' && Q == 'I') {
        printf("51\n");
    } else if (P == 'L' && Q == 'V') {
        printf("55\n");
    } else if (P == 'L' && Q == 'X') {
        printf("60\n");
    } else if (P == 'C' && Q == 'I') {
        printf("101\n");
    } else if (P == 'C' && Q == 'V') {
        printf("105\n");
    } else if (P == 'C' && Q == 'X') {
        printf("110\n");
    } else if (P == 'C' && Q == 'L') {
        printf("150\n");
    } else if (P == 'C' && Q == 'C') {
        printf("200\n");
    } else {
        printf("Ini bukan kode yang dimaksud :(\n");
    }

    return 0;
}
