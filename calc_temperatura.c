#include <stdio.h>
int main(void) {
  double c, f;
  printf("Digite a temperatura em graus Celsius.");
  scanf("%d", &c);
  f = (9*c)/5 + 32;
  printf("A temperatura em Fahrenheit é de: %f", f);
}
