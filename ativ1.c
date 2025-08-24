#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *vetor;

    printf("Digite a quantidade de numeros impares a serem armazenados: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    int numero = 1;
    for (i = 0; i < n; i++) {
        vetor[i] = numero;
        numero += 2;
    }

    printf("Vetor com %d numeros impares:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
