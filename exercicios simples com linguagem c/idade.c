#include <stdio.h>

int CalculaIdade(char nome[50], int ano_nasc) {
    int idade;
    idade = 2026 - ano_nasc;
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
}

int main(void) {
    char nome[50];
    int ano;
    
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);
    
    CalculaIdade(nome, ano);
}