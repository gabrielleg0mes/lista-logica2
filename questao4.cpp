#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O dobro do número é: %d\n", numero * 2);
    } else {
        printf("O triplo do número é: %d\n", numero * 3);
    }

    system("pause");
    return 0;
}

