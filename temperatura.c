#include <stdio.h>
int main(){

    int temp1 = 0, temp2 = 0;
    float conversao, valortemp1;

do
{
        printf("\n    Conversor de Temperatura\n");
        printf("Temos as seguintes temperaturas\n");
        printf("1- Celsius '°C'\n");
        printf("2- Fahrenheit '°F'\n");
        printf("3- Kelvin 'K'\n");
        printf("4- Sair\n");
        printf("Qual é a primeira opção: ");
        if (scanf("%d", &temp1) == 1) {

        }else{
            printf("Erro, você digitou um caractere\n");
            while (getchar() != '\n') {
            }
            continue;
        }
        

        if (temp1 == 1 || temp1 == 2 || temp1 == 3)
    {
    
                printf("Digite a temperatura: ");
                scanf("%f", &valortemp1);

                printf("Qual é a segunda temperatura: ");
                if (scanf("%d", &temp2) == 1){

                }else{
                    printf("Erro, você digitou um caractere\n");
                    while (getchar() != '\n') {
                    }
                    continue;
               }
    }
        switch (temp1) {
        case 1:
            switch (temp2) {
            case 2:
                conversao = (valortemp1 * 1.8) + 32;
            
                printf("A temperatura em Fahrenheit é de %.1f°F\n   ", conversao);
            break;

            case 3:
                conversao = valortemp1 + 273.15;

                printf("A temperatura em Kelvin é de %.2fK\n", conversao);
            break;

            default:
                printf("Opção inválida");
            break;
            }
            break;

            case 2:
            switch (temp2) {
            case 1:
                conversao = (valortemp1 - 32) / 1.8;

                printf("A temperatura em Celsius é de %.0f°C\n", conversao);
            break;
            case 3:
                conversao = ((valortemp1 - 32) / 1.8) + 273.15;

                printf("A temperatura em Kelvin é de %.2fK\n", conversao);
            break;

            default:
                printf("Opção inválida");
            break;
            }
            break;

            case 3:
            switch (temp2) {
            case 1:
                conversao = valortemp1 - 273.15;

                printf("A temperatura em Celcius é de %.0f°C\n", conversao);
            break;
            case 2:
                conversao = (valortemp1 - 273.15) * 1.8 + 32;

                printf("A temperatura em Fahrenheit é de %.0f°F\n", conversao);
            break;
        
             default:
                printf("Opção inválida");
            break;
            }
            break;
            case 4:
                printf("Saindo...");
            break;

            default:
                printf("\nOpção inválida\n");
            break;
            } 
}while(temp1 != 4);
        
    return 0;
}   