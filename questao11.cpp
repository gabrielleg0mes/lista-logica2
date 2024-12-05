#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numA, numB;
    printf("Digite o valor de A: ");
    scanf("%f", &numA);
    printf("Digite o valor de B: ");
    scanf("%f", &numB);

    if (numA > numB) {
        printf("Maior valor: %.2f\nMenor valor: %.2f\n", numA, numB);
    } else if (numB > numA) {
        printf("Maior valor: %.2f\nMenor valor: %.2f\n", numB, numA);
    } else {
        printf("Os dois números são iguais: %.2f\n", numA);
    }

    system("pause");
    return 0;
}
