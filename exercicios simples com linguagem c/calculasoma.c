#include <stdio.h>

int SOMAR(float n1, float n2) {
    float soma;
    soma = n1 + n2;
    printf("Soma = %.2f\n", soma);
}

int main(void) {
    float a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    
    SOMAR(a, b);
}