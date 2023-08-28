#include <stdio.h>

main() {

  // declaração de variaveis
  float comprimento, largura, area;

  printf("Digite o comprimento: ");
  scanf("%f", &comprimento);
  printf("\nDigete a largura: ");
  scanf("%f", &largura);

  area = largura * comprimento;

  printf("A area da sala é: %2fm2", area);
  
}