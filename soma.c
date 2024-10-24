#include <stdio.h>

int soma_vetor(int vetor[], int tamanho){
  int soma = 0;
  for(int i = 0; i < tamanho; i++){
    soma += vetor[i];
  }
  return soma;
}



int main() {
  int vetor[5];
  printf("Digite os números do vetor: ");
  for(int i = 0; i < 5; i++){
    scanf("%d", &vetor[i]);
  }
  int soma = soma_vetor(vetor, 5);
  printf("O resultado da soma dos números do vetor é %d\n", soma);
  return 0;
}