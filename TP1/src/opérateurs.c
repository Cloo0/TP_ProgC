#include <stdio.h>
void calcul(int a,int b) {
    printf("a+b = %d\n",a+b);
    printf("a-b =%d\n ",a-b);
    printf("a*b =%d\n",a*b);
    printf("a/b =%d\n",a/b);
    printf("Le reste de la division de a par b est %d\n",a%b);
    if (a==b) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    if (a>b) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
}
int main() {
    int a = 16;
    int b = 3;
    calcul(a,b);
    return 0;
}

