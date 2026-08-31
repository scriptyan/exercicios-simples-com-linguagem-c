#include <stdio.h>

int CalculaQuadrado(float L) {
    float A;
    A = L * L;
    printf("Area do Quadrado = %.2f\n", A);
}

int CalculaLosango(float D, float d) {
    float A;
    A = (D * d) / 2;
    printf("Area do Losango = %.2f\n", A);
}

int CalculaRetangulo(float b, float h) {
    float A;
    A = b * h;
    printf("Area do Retangulo = %.2f\n", A);
}

int CalculaTrapezio(float B, float b, float h) {
    float A;
    A = ((B + b) * h) / 2;
    printf("Area do Trapezio = %.2f\n", A);
}

int main(void) {
    CalculaQuadrado(4);
    CalculaLosango(6, 3);
    CalculaRetangulo(5, 2);
    CalculaTrapezio(8, 4, 3);
}