#include <stdio.h>
#include <string.h>

struct Pessoa{
  char nome[100];
  int idade;
  float altura;
};

int main(){
  struct Pessoa pessoa;
  printf("Digite o nome da pessoa: \n");
  fgets(pessoa.nome, 100, stdin);
  pessoa.nome[strcspn(pessoa.nome, "\n")] = 0;
  printf("Digite a idade: \n");
  scanf("%d", &pessoa.idade);

  printf("Digite a altura: \n");
  scanf("%f", &pessoa.altura);

  printf("Nome: %s\n",pessoa.nome);
  printf("Idade: %d\n",pessoa.idade);
  printf("Altura: %.2f\n",pessoa.altura);

  return 0;
}
