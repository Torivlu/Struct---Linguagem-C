#include <stdio.h>

void exibirInverso(int vetor[], int tamanho) {
    printf("Numeros na ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    exibirInverso(vetor, 10);

    return 0;
}
