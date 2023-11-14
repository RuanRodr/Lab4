#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 15

void concatenar(char *resultado, const char *str1, const char *str2){

  while(*str1 != '\0'){
    *resultado = *str1;
    resultado++;
    str1++;
  }
  while(*str2 != '\0'){
    *resultado = *str2;
    resultado++;
    str2++;
  }
  *resultado = '\0';
}

int main() {
  char nome[TAM];
  char nome2[TAM];

  scanf("%s", nome);
  scanf("%s", nome2);
  
  int total = strlen(nome) + strlen(nome2) + 1;
  char *completo = (char *)malloc(total);
  
  concatenar(completo, nome, nome2);

  printf("%s", completo);

  free(completo);
  
  return 0;
}