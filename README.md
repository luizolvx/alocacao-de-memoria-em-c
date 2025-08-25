# Alocação Dinâmica em C - Exercícios Práticos

Três programas em linguagem C demonstrando diferentes aplicações de alocação dinâmica de memória, desde vetores simples até matrizes bidimensionais.

## Estrutura do Projeto

### Arquivos
- `ativ1.c` - Alocação dinâmica de vetor de números ímpares
- `ativ2.c` - Array dinâmico para cálculo de média de notas
- `ativ3.c` - Soma de matrizes com alocação dinâmica bidimensional

## Funcionalidades Implementadas

### ativ1.c - Vetor de Números Ímpares
- **Alocação dinâmica** de vetor de inteiros
- **Geração automática** de números ímpares
- **Entrada do usuário** para definir tamanho do vetor
- **Liberação de memória** com free()

### ativ2.c - Sistema de Notas Escolares
- **Array dinâmico** de notas (float)
- **Cálculo de média** da turma
- **Armazenamento** e exibição de notas individuais
- **Tratamento de erro** na alocação de memória

### ativ3.c - Soma de Matrizes
- **Alocação dinâmica bidimensional** de matrizes
- **Soma de matrizes** MxN
- **Entrada de dados** para duas matrizes
- **Liberação completa** de memória alocada

## Características Técnicas Demonstradas

### Conceitos de Alocação Dinâmica
- Uso de `malloc()` para alocação de memória
- Verificação de sucesso na alocação (`NULL` check)
- Liberação de memória com `free()`
- Ponteiros para tipos primitivos e estruturas complexas

### Técnicas Avançadas (ativ3.c)
- Ponteiros para ponteiros (`int **`)
- Alocação em duas etapas para matrizes
- Acesso via sintaxe de array `matriz[i][j]`
- Liberação em loop para cada linha

### Exemplos de Saída

### ativ1.c:
- Vetor com 5 numeros impares:
- 1 3 5 7 9

### ativ2.c:
- Notas dos alunos:
- Aluno 1: 8.50
- Aluno 2: 7.00
...
- Media da turma: 7.75
