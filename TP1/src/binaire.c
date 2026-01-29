#include <stdio.h>

int main() {
    int nb = 13;
    int a_affiche = 0;

    printf("%d en binaire : ", nb);

    if (nb == 0) printf("0");

    for (int i = 31; i >= 0; i--) {
        int bit = (nb >> i) & 1;
        if (bit == 1) a_affiche = 1;
        if (a_affiche) {
            printf("%d", bit);
        }
    }

    printf("\n");
    return 0;
}