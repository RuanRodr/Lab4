#include <stdio.h>

void troca(int *ptr1, int *ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main() {
  int num1, num2;
  int *ptr;

  puts("Digite o primeiro número:");
  scanf("%d", &num1);
  puts("Digite o segundo número:");
  scanf("%d", &num2);

  troca(&num1, &num2);

  printf("num1 = %d, num2 = %d", num1, num2);
  
  return 0;
}