#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float celsius, fahrenheit, kelvin;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    if (celsius < 20) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);
    } else {
        kelvin = celsius + 273.15;
        printf("Temperatura em Kelvin: %.2f K\n", kelvin);
    }

    system("pause");
    return 0;
}
