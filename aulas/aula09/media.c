#include <stdio.h>

int main() {
  int numeros[10];
  int soma = 0;

  for (int i = 0; i < 10; i++) {
    printf("Entre com o %io número: ", i);
    int deu_certo = scanf("%i", &numeros[i]);
    soma = soma + numeros[i];
  }

  float media = soma / 10.0f;
  printf("A média de ");
  for (int i = 0; i < 10; i++) {
    printf("%i +", numeros[i]);
  }
  printf("= %.1f\n", media);

  return 0;
}