#include <stdio.h>

int soma_diagonal(int matriz[3][3], int line, int col){
  int soma = 0;
  for(int i = 0; i < line; i++){
    for(int j = 0; j < col; j++){
      if(i == j){
        soma += matriz[i][j];
      }
    }
  }
  return soma;
}

void imprimirMatriz(int matriz[3][3]){
  
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }
}


int main(){
  int matriz[3][3];
  printf("Digite os valores da matriz 3x3:\n");

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d",&matriz[i][j]);
    }
  }

  printf("A matriz que foi digitalizada: \n");
  imprimirMatriz(matriz);

  int soma = soma_diagonal(matriz, 3, 3);

  printf("O resultado da soma da diagonal principal é: %d", soma);
  
  
  return 0;
}
