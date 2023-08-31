#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void q01()
{
    const double pi =
        3.1415; // Adotei pi 3.1415 apenas para fins de simplificação de código.
    double r, v;
    printf("Digite o valor do raio:\n");
    scanf("%lf", &r);
    v = 4 * pow(r, 3) * pi;
    printf("%.2f", v);
}

void q02()
{
    const double litros_g = 3.7854;
    double g_dolar, reais_dolar, l_real;
    printf(
        "Digite o preco do galao de gasolina praticado nos Estados Unidos:\n $ ");
    scanf("%lf", &g_dolar);
    printf("Digite a taxa de conversão do dolar para o real:\n $ 1.00 Equivale a "
           "R$ ");
    scanf("%lf", &g_dolar);
    l_real = g_dolar / litros_g * reais_dolar;
    printf("%.2f", l_real);
}

void q03()
{
    double s;
    int h, m;
    printf("Qual número de segundos transcorridos no evento?\n");
    scanf("%lf", &s);
    h = floor(s / 3600);
    m = floor((s - h * 3600) / 60);
    s -= (h * 3600 + m * 60);
    printf("%02d:%02d:%05.2f", h, m, s);
}

void q04()
{
    int n;
    printf("Qual o valor em reais? \nR$ ");
    scanf("%d", &n);
    printf("%d nota(s) de R$ 100,00 \n", (n / 100));
    n %= 100;
    printf("%d nota(s) de R$ 50,00 \n", (n / 50));
    n %= 50;
    printf("%d nota(s) de R$ 20,00 \n", (n / 20));
    n %= 20;
    printf("%d nota(s) de R$ 10,00 \n", (n / 10));
    n %= 10;
    printf("%d nota(s) de R$ 5,00 \n", (n / 5));
    n %= 5;
    printf("%d nota(s) de R$ 2,00 \n", (n / 2));
    n %= 2;
    if (n != 0)
    {
        printf("E uma moeda de R$ 1,00");
    }
}

void q05()
{
    int a, b, c, maior, menor;
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    if (maior < b)
    {
        maior = b;
    }
    if (maior < c)
    {
        maior = c;
    }
    menor = a;
    if (menor > b)
    {
        menor = b;
    }
    if (menor > c)
    {
        menor = c;
    }
    printf("%d, %d, %d", maior, (a + b + c - maior - menor), menor);
}

void q06()
{
    // escreva seu código aqui
}

void q07()
{
    // escreva seu código aqui
}

void q08()
{
    // escreva seu código aqui
}

void q09()
{
    // escreva seu código aqui
}

void q10()
{
    // escreva seu código aqui
}

int main(void)
{
    int questao;
    printf("Digite o numero questão: ");
    scanf("%d", &questao);
    switch (questao)
    {
    case 1:
        q01();
        break;

    case 2:
        q02();
        break;

    case 3:
        q03();
        break;

    case 4:
        q04();
        break;

    case 5:
        q05();
        break;

    case 6:
        q06();
        break;

    case 7:
        q07();
        break;

    case 8:
        q08();
        break;

    case 9:
        q09();
        break;

    case 10:
        q10();
        break;

    defaul:
        printf("Questão inexistente!");
    }
    return 0;
}