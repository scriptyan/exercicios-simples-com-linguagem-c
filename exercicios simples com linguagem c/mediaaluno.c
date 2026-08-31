#include <stdio.h>

int CalculaMedia(char nome[50], float n1, float n2) {
    float media;
    media = (n1 + n2) / 2;
    printf("\nAluno: %s\n", nome);
    printf("Media = %.2f\n", media);
}

int main(void) {
    char nome[50];
    float nota1, nota2;
    
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    CalculaMedia(nome, nota1, nota2);
}