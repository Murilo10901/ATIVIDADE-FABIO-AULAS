#include <stdio.h>

int main() {
    int n, maior, num, i = 1;

    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida!\n");
        return 0;
    }

    printf("Digite o número 1: ");
    scanf("%d", &maior);

    while (i < n) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        i++;
    }

    printf("O maior número da lista é: %d\n", maior);
    return 0;
}
