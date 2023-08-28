#include <stdio.h>

main() {
  /*
  Faça um programa em que o usuário digite o custo de uma determinada
  mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas
  aventuais (também solicitadas pelo teclado). Para concluir, o programa
  perguntar qual o valor de venda e indica a percentagem de lucro da mercadoria
  */

  // declaração de variaveis

  float custo, frete, despesa, valorVenda, valorBruto, lucro, porcentagemLucro;

  printf("Digite o custo do produto: ");
  scanf("%f", &custo);

  printf("Digite o frete do produto: ");
  scanf("%f", &frete);

  printf("Digite a despesa: ");
  scanf("%f", &despesa);

  valorBruto = custo + frete + despesa;

  printf("O valor de custo do produto é: R$%f. \nDigite o valor de venda:", valorBruto);
  scanf("%f", &valorVenda);

  lucro = valorVenda - valorBruto;
  
  porcentagemLucro = (lucro/valorBruto)*100;

  printf("Porcentagem do lucro: %f%%", porcentagemLucro);
  
  
}