#include <stdio.h>
int main(void) {
  int escolha;
  double temperatura;
  
  printf("Qual operacao deseja fazer? \n [0] Transformar C -> F \t [1] Transformar F -> C \n");
  scanf("%d", &escolha);
  
  if(escolha == 0){
    printf("Digite a temperatura em graus Celsius.");
    scanf("%d", &temperatura);
    temperatura = (9*temperatura)/5 + 32;
    printf("A temperatura em fahrenheit e de: %f", temperatura);
  }

  else if(escolha == 1){
    printf("Digite a temperatura em graus fahrenheit.");
    scanf("%d", &temperatura);
    temperatura = 5*(temperatura-32)/9.0;
   printf("A temperatura em celsius e de: %f", temperatura);
  }

  else{
    printf("ERROR - Digite apenas alguma das 2 opcoes.");
  }
}