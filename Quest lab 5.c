#include <stdio.h>
#define TAM 15

int tamanho(const char *str){
  const char *ptr = str;

  while(*ptr != '\0'){
    ptr++;
  }
  return ptr - str;
}

int main(){
  char nome[TAM];
  scanf("%s", nome);
  int tam = tamanho(nome);

  printf("O tamanho é: %d", tam);
}