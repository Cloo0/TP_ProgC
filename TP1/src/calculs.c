#include <stdio.h>

int main () {
    int num1 = 12;
    int num2 = 4;
    char op = '/';
    switch (op) {
        case '+':
            printf("%d",num1 + num2);
            break;
        case '-':
            printf("%d",num1 - num2);
        break;
        case '*':
            printf("%d",num1 * num2);
            break;
        case '/':
            printf("%d",num1 / num2);
            break;
    }
    return 0;
}
