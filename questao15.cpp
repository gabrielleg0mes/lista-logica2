#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova (peso 1): ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova (peso 1): ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova (peso 2): ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4;

    printf("Média final: %.2f\n", media);
    if (media >= 60) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    system("pause");
    return 0;
}





