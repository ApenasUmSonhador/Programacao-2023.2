#include <stdio.h>
int main(void) {
  double c, f;
  printf("Digite a temperatura em graus Fahrenheit.");
  scanf("%d", &f);
  c = 5*(f-32)/9.0;
  printf("A temperatura em celsius e de: %f", c);
}
