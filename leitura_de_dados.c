#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
  char nome[100];
  int idade;
  float altura;
};

int main(){
  struct Pessoa pessoa;
  FILE *arquivo;

  arquivo = fopen("dados1.txt", "r");
  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  if(fgets(pessoa.nome, 100, arquivo) != NULL){
    pessoa.nome[strcspn(pessoa.nome, "\n")] = 0;
    fscanf(arquivo, "%d", &pessoa.idade);
    fscanf(arquivo, "%f", &pessoa.altura);
  } else{
    printf("Erro ao ler os dados do arquivo\n");
    fclose(arquivo);
    return 1;
  }

  printf("\nInformações da pessoa:\n");
  printf("Nome: %s\n", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Altura: %.2f metros\n", pessoa.altura);

  fclose(arquivo);
  
  return 0;
}
