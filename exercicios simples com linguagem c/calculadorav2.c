#include <stdio.h>

int Somar(float a, float b) { printf("Soma = %.2f\n", a + b); }
int Subtrair(float a, float b) { printf("Subtracao = %.2f\n", a - b); }
int Multiplicar(float a, float b) { printf("Multiplicacao = %.2f\n", a * b); }
int Dividir(float a, float b) { printf("Divisao = %.2f\n", a / b); }

int main(void) {
    int opcao;
    float n1, n2;
    
    opcao = 0;
    while (opcao != 5) {
        printf("\nMENU PRINCIPAL\n");
        printf("=================\n");
        printf("1) Somar\n2) Subtrair\n3) Multiplicar\n4) Dividir\n5) Sair\n");
        printf("=================\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        
        if ((opcao >= 1) && (opcao <= 4)) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            
            switch(opcao) {
                case 1: Somar(n1, n2); break;
                case 2: Subtrair(n1, n2); break;
                case 3: Multiplicar(n1, n2); break;
                case 4: Dividir(n1, n2); break;
            }
        }
    }
}