#include <stdio.h>

int main() {
    char jenisOperasi;
    long long N, M;

    scanf(" %c", &jenisOperasi);

    scanf("%lld", &N);
    scanf("%lld", &M);

 
    if (jenisOperasi == 'K') {
        if (N % M == 0) {
            printf("Bener banget cuy!\n");
        } else {
            printf("\tBukan nih.");
        }
    } else if (jenisOperasi == 'F') { 
        if (M % N == 0) {
            printf("Bener banget cuy!\n");
        } else {
            printf("\tBukan nih.");
        }
    } else {
        printf("Kamu masukin apa?\n");
    }

    return 0;
}
