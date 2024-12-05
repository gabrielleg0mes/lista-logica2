#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valor;
    char pagamento;
    printf("Digite o valor da compra: R$");
    scanf("%f", &valor);
    printf("Pagamento à vista? (s/n): ");
    scanf(" %c", &pagamento);

    if (valor > 500 && (pagamento == 's' || pagamento == 'S')) {
        printf("Tem direito a desconto\n");
    } else {
        printf("Sem desconto\n");
    }

    system("pause");
    return 0;
}
