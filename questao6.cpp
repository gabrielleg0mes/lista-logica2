#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float velocidade, multa;
    printf("Digite a velocidade do veículo (km/h): ");
    scanf("%f", &velocidade);

    if (velocidade > 80) {
        multa = (velocidade - 80) * 5;
        printf("Você ultrapassou o limite de velocidade. Multa: R$%.2f\n", multa);
    } else {
        printf("Dentro do limite de velocidade\n");
    }

    system("pause");
    return 0;
}

