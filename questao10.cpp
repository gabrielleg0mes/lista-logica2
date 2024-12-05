#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao;
    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2) {
        printf("Empréstimo não concedido\n");
    } else {
        printf("Empréstimo concedido\n");
    }

    system("pause");
    return 0;
}
