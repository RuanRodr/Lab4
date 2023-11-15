#include <stdio.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int *array, int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        trocar(&array[j], &array[j + 1]);
      }
    }
  }
}

void imprimirArray(int *array, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int tamanho;
  printf("Digite o tamanho do array: ");
  scanf("%d", &tamanho);

  int array[tamanho];
  printf("Digite os elementos do array:\n");
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &array[i]);
  }

  printf("Array antes da ordenacao: ");
  imprimirArray(array, tamanho);

  bubbleSort(array, tamanho);

  printf("Array depois da ordenacao: ");
  imprimirArray(array, tamanho);

  return 0;
}