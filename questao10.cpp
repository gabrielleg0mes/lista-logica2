#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao;
    printf("Digite o sal�rio do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da presta��o do empr�stimo: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2) {
        printf("Empr�stimo n�o concedido\n");
    } else {
        printf("Empr�stimo concedido\n");
    }

    system("pause");
    return 0;
}
