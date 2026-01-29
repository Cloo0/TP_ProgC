#include <stdio.h>

int main() {
    char a = 'a';
    short b = 2;
    int c = 3;
    long int d = 4229375;
    long long int e = 1093847172384712;
    printf("La taille d'un char = %lu\n", sizeof(a));
    printf("La taille d'un short = %lu\n", sizeof(b));
    printf("La taille d'un int = %lu\n", sizeof(c));
    printf("La taille d'un long int = %lu\n", sizeof(d));
    printf("La taille d'un long long int = %lu\n", sizeof(e));
    return 0;
}
