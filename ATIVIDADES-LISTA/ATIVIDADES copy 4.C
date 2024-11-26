#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
    
