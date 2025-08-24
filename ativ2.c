#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, qtdAlunos;
    float *notas;
    float soma = 0, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    notas = (float *)malloc(qtdAlunos * sizeof(float));

    if (notas == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < qtdAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("\nNotas dos alunos:\n");
    for (i = 0; i < qtdAlunos; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }

    media = soma / qtdAlunos;
    printf("\nMedia da turma: %.2f\n", media);

    free(notas);

    return 0;
}
