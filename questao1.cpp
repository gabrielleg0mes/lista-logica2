#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal\n");
    } else {
        printf("Fora do peso normal\n");
    }

    system("pause");
    return 0;
}
