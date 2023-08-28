#include <stdio.h>

main() {
  /*
  Escreva um programa que pergunte qual o radio de um círculo e imprima a sua área
  */

  // declaração de variaveis

  double raio, areaCirculo;
  double PI = 3.1415;

  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);

  areaCirculo = PI * (raio * raio);

  printf("A area do circulo é: %lf", areaCirculo);
  
}