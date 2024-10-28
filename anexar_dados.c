#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
  char nome[100];
  int idade;
  float altura;
};

int main() {
  struct Pessoa pessoa;
  FILE *arquivo;

  arquivo = fopen("dados2.txt", "a");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  printf("Digite o nome do usuário: \n");
  fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

  size_t len = strlen(pessoa.nome);
  if (len > 0 && pessoa.nome[len - 1] == '\n') {
    pessoa.nome[len - 1] = '\0';
  }

  fprintf(arquivo, "Nome: %s\n", pessoa.nome);


  printf("Digite a idade do usuário: \n");
  scanf("%d", &pessoa.idade);

  getchar();

  fprintf(arquivo, "Idade: %d \n", pessoa.idade);

  printf("Digite a altura do usuário: \n");
  scanf("%f", &pessoa.altura);

  fprintf(arquivo, "Altura: %.2f \n", pessoa.altura);
  fprintf(arquivo, "-------------\n");

  printf("\nInformações da pessoa:\n");
  printf("Nome: %s\n", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Altura: %.2f metros\n", pessoa.altura);

  fclose(arquivo);

  return 0;
}
