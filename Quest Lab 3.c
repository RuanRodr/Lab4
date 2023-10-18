#include <stdio.h>

int main() {
  int num;
  int *menor = NULL;

  while(1){
    puts("Digite um número (número negativo encerra);");
    scanf("%d", &num);

    if(num < 0){
      break;
    }

    if(menor == NULL || num < *menor){
      menor = &num;
    }
  }
  
  if(menor != NULL){
    printf("O menor número é: %d\n", *menor);
  }
  return 0;
}