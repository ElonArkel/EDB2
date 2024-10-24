#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}



int main() {
  int numero1, numero2;
  scanf("%d %d", &numero1, &numero2);
  printf("Os números antes da troca: %d %d\n", numero1, numero2);
  swap(&numero1, &numero2);
  printf("Os números depois da troca: %d %d\n", numero1, numero2);
  
  return 0;
}