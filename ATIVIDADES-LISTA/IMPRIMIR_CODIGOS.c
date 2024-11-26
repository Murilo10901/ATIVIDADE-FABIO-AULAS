#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Linha
        for (int j = 1; j <= i; j++) { // Coluna
            printf("%d ", j);
        }
        printf("\n"); // Quebra de linha após cada sequência
    }

    return 0;
}
