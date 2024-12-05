#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10 && numero % 5 == 0) {
        printf("Maior que 10 e divisível por 5\n");
    } else {
        printf("Não atende às condições\n");
    }

    system("pause");
    return 0;
}
