#include <stdio.h>
int main(){

    int temp1, temp2;
    float conversao, valortemp1;

    printf("Temos as seguintes temperaturas\n");
    printf("1- Celsius '°C'\n");
    printf("2- Fahrenheit '°F'\n");
    printf("3- Kelvin 'K'\n");
    printf("Qual é a primeira temperatura: ");
    scanf("%d", &temp1);

    printf("Digite a temperatura: ");
    scanf("%f", &valortemp1);

    printf("Qual é a segunda temperatura: ");
    scanf("%d", &temp2);

    if (temp1 == 1 && temp2 == 2) {
        conversao = (valortemp1 * 1.8) + 32;

        printf("A temperatura em Fahrenheit é de %.1f°F", conversao);
    }else if (temp1 == 1 && temp2 == 3) {
        conversao = valortemp1 + 273.15;

        printf("A temperatura em Kelvin é de %.2fK", conversao);
    }else if (temp1 == 2 && temp2 == 1) {
        conversao = (valortemp1 - 32) / 1.8;

        printf("A temperatura em Celsius é de %.0f°C", conversao);
    }else if (temp1 == 2 && temp2 == 3) {
        conversao = ((valortemp1 - 32) / 1.8) + 273.15;
        
        printf("A temperatura em Kelvin é de %.2fK", conversao);
    }else if (temp1 == 3 && temp2 == 1) {
        conversao = valortemp1 - 273.15;

        printf("A temperatura em Celcius é de %.0f°C", conversao);
    }else if (temp1 == 3 && temp2 == 2) {
        conversao = (valortemp1 - 273.15) * 1.8 + 32;

        printf("A temperatura em Fahrenheit é de %.0f°F", conversao);
    }

    return 0;
}



