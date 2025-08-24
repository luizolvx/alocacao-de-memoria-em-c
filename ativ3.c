#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, m, n;
    int **matriz1, **matriz2, **soma;

    printf("Digite o numero de linhas (M): ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (N): ");
    scanf("%d", &n);

    matriz1 = (int **)malloc(m * sizeof(int *));
    matriz2 = (int **)malloc(m * sizeof(int *));
    soma = (int **)malloc(m * sizeof(int *));

    for (i = 0; i < m; i++) {
        matriz1[i] = (int *)malloc(n * sizeof(int));
        matriz2[i] = (int *)malloc(n * sizeof(int));
        soma[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Matriz soma:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(soma[i]);
    }

    free(matriz1);
    free(matriz2);
    free(soma);

    return 0;
}
