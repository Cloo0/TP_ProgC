#include <stdio.h>
#include <string.h>
void calcul_cercle(double r) {
    double pi = 3.1416;
    printf("L'aire du cercle = %f\n", pi*(r*r));
    printf("Le périmètre du cercle = %f\n", pi*(r+r));
    printf("Le rayon du cercle  = %f\n",r);
}
int main() {
double r = 6;
calcul_cercle(r);
return 0;
}

