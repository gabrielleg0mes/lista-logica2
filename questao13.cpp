#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero, resultado;
    printf("Digite um número real: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", numero, resultado);
    } else {
        resultado = pow(numero, 2);
        printf("O número ao quadrado é %.2f\n", resultado);
    }

    system("pause");
    return 0;
}

