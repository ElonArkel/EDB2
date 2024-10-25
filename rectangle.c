#include <stdio.h>

struct Retangulo{
  int largura;
  int altura;
};

int area_retangulo(struct Retangulo *r){
  return r->largura * r->altura;
}

int main(){
  struct Retangulo retangulo;
  printf("Digite a largura do retangulo: \n");
  scanf("%d", &retangulo.largura);

  printf("Digite a altura do retangulo: \n");
  scanf("%d", &retangulo.altura);

  printf("A área do retângulo é: %d\n", area_retangulo(&retangulo));

  return 0;
}
