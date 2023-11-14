#include <stdio.h>
#define TAM 15

void copiar(char *str1, const char *str2){

  while((*str1++ = *str2++)){
  }
}

int main() {
  char nome[TAM];
  char nome2[TAM];
  
  scanf("%s", nome);

  copiar(nome2, nome);
  
  printf("%s", nome2);
  
  return 0;
}