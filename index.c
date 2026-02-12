#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char nome[50];
    int idade;
    char estdcvl[10];

    printf("Qual seu nome?: ");
    scanf(%f, &nome);
    printf("Qual sua idade?: ");
    scanf(%d, &idade);
    printf("Qual seu estado civil?: ");
    scanf(%f, &estdcvl);
    system("cls");
    printf("Ficha de " + nome":");
    printf("Nome: " + nome);
    printf("Idade: " + idade);
    printf("Estado Civil: " + estdcvl);

}