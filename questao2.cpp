#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero > 10 && numero % 5 == 0) {
        printf("Maior que 10 e divis�vel por 5\n");
    } else {
        printf("N�o atende �s condi��es\n");
    }

    system("pause");
    return 0;
}
