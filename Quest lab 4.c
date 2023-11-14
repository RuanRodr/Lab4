#include <stdio.h>
#define TAM 5

//Quando se coloca valores não inteiros o código compila de forma estranha. Fazendo com que o "for" rode até o fim.

int main() {
  int x[TAM];

  for (int i = 0; i <= TAM; i++){
    puts("Digite um número:");
    scanf("%d", &x[i]);
    printf("O valor é : %d, o endeço: %p\n\n", x[i], &x[i]);
    
  }
  return 0;
}