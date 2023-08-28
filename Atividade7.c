#include <stdio.h>

main(){
  
  /*
  Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa em dias. Conciderar ano com 365 dias e mês com 30 dias.
  */

  //usuario colocar data de nascimento, mês de nascimento e ano de nascimento, com esssas informações fazer algoritmo que calcule quantidade de dias que o usuario já vivel
    
  // declaração de variaveis
  
  int anos, meses, dias, totalDias;

  printf("Anos: ");
  scanf("%d", &anos);

  printf("\nMeses: ");
  scanf("%d", &meses);

  printf("\nDias: ");
  scanf("%d", &dias);
  
  totalDias = anos * 365 + meses * 30 + dias;

  printf("Total de dias vividos: %d", totalDias);
  
  
}