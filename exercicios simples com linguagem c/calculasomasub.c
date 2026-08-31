#include <stdio.h>

int Somar(float a, float b) {
    printf("Resultado da Soma = %.2f\n", a + b);
}

int Subtrair(float a, float b) {
    printf("Resultado da Subtracao = %.2f\n", a - b);
}

int main(void) {
    int opcao;
    float n1, n2;
    
    printf("MENU PRINCIPAL\n");
    printf("=================\n");
    printf("1) Somar\n");
    printf("2) Subtrair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    
    if ((opcao == 1) || (opcao == 2)) {
        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);
        
        if (opcao == 1) {
            Somar(n1, n2);
        } else {
            Subtrair(n1, n2);
        }
    }
}