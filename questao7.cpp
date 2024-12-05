#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;
    float valor_ingresso, valor_final;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o valor do ingresso: R$ ");
    scanf("%f", &valor_ingresso);

    if (idade > 60) {
        valor_final = valor_ingresso * 0.70;
    } else {
        valor_final = valor_ingresso * 0.90;
    }

    printf("O valor final do ingresso é: R$ %.2f\n", valor_final);

    system("pause");

    return 0;
}
