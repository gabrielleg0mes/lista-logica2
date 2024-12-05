#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Digite a nota da prova adicional: ");
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        if (media >= 5) {
            printf("Aprovado com recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    system("pause");
    return 0;
}
