#include <stdio.h>

main() {

  // Escreva um algoritmo para ler o salári mensal atual de um funcionário e o
  // percentual de reajuste. Caulcular e escrever o valor do novo salário.

  // declaração de variaveis

  float salarioAtual, percentualReajuste, novoSalario, porcentagem;

  printf("Digite o salario atual: ");
  scanf("%f", &salarioAtual);

  printf("Digite a porcentagem de reajuste: ");
  scanf("%f", &percentualReajuste);

  novoSalario = salarioAtual + ((percentualReajuste/100)*salarioAtual);

  printf("Novo salario: R$%.2f", novoSalario);
}