#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0) { // Verifica se o número é positivo
        printf("O número é positivo.\n");
    } else if (num < 0) { // Verifica se o número é negativo
        printf("O número é negativo.\n");
    } else { // Se não for positivo nem negativo, é zero
        printf("O número é zero.\n");
    }

    return 0;
}
