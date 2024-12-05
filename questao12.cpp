#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float A, B, C, D, maior, menor;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("Digite o valor de D: ");
    scanf("%f", &D);

    maior = A;
    menor = A;

    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;

    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;

    printf("Maior valor: %.2f\nMenor valor: %.2f\n", maior, menor);

    system("pause");
    return 0;
}
