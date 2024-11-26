#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite números para somar (digite 0 para sair):\n");
    while (1) { // Loop infinito
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == 0) { // Sai do loop se o número for 0
            break;
        }

        soma += num; // Adiciona o número à soma
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
