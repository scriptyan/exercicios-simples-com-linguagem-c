#include <stdio.h>

float ExibeMedia(float n1, float n2) {
    float media;
    media = (n1 + n2) / 2;
    printf("\nMedia = %.2f\n", media);
    return media;
}

int ExibeSituacao(float media) {
    if (media >= 6) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}

int main(void) {
    char nome[50];
    float nota1, nota2, media;
    
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    printf("\nAluno: %s", nome);
    media = ExibeMedia(nota1, nota2);
    ExibeSituacao(media);
}