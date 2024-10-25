#include <stdio.h>
#include <stdlib.h>

int somaVetor(int a[5]) {
  int soma = 0;
  for (int i = 0; i < 5; i++){
    soma += a[i];
  }
  return soma;
}

int main(){
  int *array = malloc(sizeof(int) * 5);

  if(array == NULL){
    printf("Alocação de Memória falhou.\n");
    return 1;
  }

  for(int i = 0; i < 5; i++){
    scanf("%d" , &array[i]);
  }
  printf("O array é: \n");
  
  for(int i = 0; i < 5; i++){
    printf("%d " , array[i]);
  }
  
  int soma = somaVetor(array);
  
  printf("\nA soma é: %d" , soma);
  free(array);
  
  return 0;
}
