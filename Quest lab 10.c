#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20

void conta(int *X, int *F, int tamanho){
  for (int i = 0; i < tamanho; i++){
    F[X[i]]++;
  }
}

void print(int* v, int n){
  for (int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
}

int main(){
  srand(time(NULL));

  int x[TAM]; 
  int f[TAM]; 
  
  for (int i = 0; i < TAM; i++){
    x[i] = rand() % TAM; 
    f[i] = 0; 
  }

  printf("vetor de x:\n");
  print(x, TAM);

  conta(x, f, TAM);

  printf("\nVetor de F:\n");
  print(f, TAM);
  
  return 0;
}