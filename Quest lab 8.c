#include <stdio.h>
#define TAM 15

char* buscar(char* busca, char letra){
  while(*busca != '\0'){
    if(*busca == letra){
      return busca;
    }
    busca++;
  }
  return NULL;
}

int main() {
  char nome[TAM];
  scanf("%s", nome);

  char letra;
  scanf(" %c", &letra);

  char* resultado = buscar(nome, letra);
  resultado++;
  
  if(resultado != NULL){
    printf("a letra '%c' está na %ld posição",letra, resultado - nome);
  } else {
    printf("letra não encontrada");
  }
  
  return 0;
}