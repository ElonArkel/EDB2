#include <stdio.h>

int main(){

  int a = 10, b = 30;
  int *p = &a, *q = &b;
  printf("Valores antes da modificação: a = %d, b = %d\n", a, b);
  *p = 50;
  *q = 80;
  printf("Valores depois da modificação: a = %d, b = %d\n", a, b);
  
  return 0;
}
