#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) { // Verifica se o número é divisível por 2
            printf("%d é par\n", i);
        } else {
            printf("%d é ímpar\n", i);
        }
    }

    return 0;
}
