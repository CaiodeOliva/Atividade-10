#include <stdio.h>

main() {
  /*
  Dado um valor em reais e a cotação do doólar, converta esse valor para dólar
  */
  
  // declaração de variaveis
  float reais = 10.0, cotacao = 4.48, valorConvertido;

  valorConvertido = reais / cotacao;

  printf("Valor conertido em dólar é: US$%f", valorConvertido);
  
}