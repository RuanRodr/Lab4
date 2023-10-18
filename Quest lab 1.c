#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int num, num1;
  int *ptr;

  scanf("%d", &num);
  scanf("%d", &num1);
  
  num = num + num1;

  ptr = &num;

  printf("O endereço de num é: %p\n", &num);
  printf("O valor de num é: %d\n", num);
  printf("confirmando o endereço: %p", ptr);
  
  return 0;
}  