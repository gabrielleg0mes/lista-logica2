#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 20) {
        soma += 8;
    } else {
        soma -= 5;
    }

    printf("Resultado final: %d\n", soma);

    system("pause");
    return 0;
}
