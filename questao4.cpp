#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O dobro do n�mero �: %d\n", numero * 2);
    } else {
        printf("O triplo do n�mero �: %d\n", numero * 3);
    }

    system("pause");
    return 0;
}

