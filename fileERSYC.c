#include <stdio.h>

int main() {
    unsigned long long total;

    scanf("%llu", &total);

    if (total % 5 != 0) {
        printf("Ersya Mengsedih :(\n");
    } else {
        unsigned long long lembar;

        if (total >= 250) {
            lembar = total / 250;
            printf("%llu lembar 250 ribuan\n", lembar);
            total %= 250;
        } else {
            printf("0 lembar 250 ribuan\n");
        }

        if (total >= 100) {
            lembar = total / 100;
            printf("%llu lembar 100 ribuan\n", lembar);
            total %= 100;
        } else {
            printf("0 lembar 100 ribuan\n");
        }

        if (total >= 50) {
            lembar = total / 50;
            printf("%llu lembar 50 ribuan\n", lembar);
            total %= 50;
        } else {
            printf("0 lembar 50 ribuan\n");
        }

        if (total >= 20) {
            lembar = total / 20;
            printf("%llu lembar 20 ribuan\n", lembar);
            total %= 20;
        } else {
            printf("0 lembar 20 ribuan\n");
        }

        if (total >= 10) {
            lembar = total / 10;
            printf("%llu lembar 10 ribuan\n", lembar);
            total %= 10;
        } else {
            printf("0 lembar 10 ribuan\n");
        }

        if (total >= 5) {
            lembar = total / 5;
            printf("%llu lembar 5 ribuan\n", lembar);
        } else {
            printf("0 lembar 5 ribuan\n");
        }
    }

    return 0;
}
