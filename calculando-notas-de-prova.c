#include   <stdlib.h>
#include   <string.h>
#include   <locale.h>
#include   <stdio.h>

void main(){
setlocale(LC_ALL,"portuguese");

  float nota1, nota2, media;
    char nome[50];

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Digite a primeira nota: ");
    scanf(" %f", &nota1);

    printf("Digite a segunda nota: ");
    scanf(" %f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n\n");
    printf("Nome: %s\n", nome);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Media: %.2f\n", media);

    if (media >= 7) {
       if (media <= 10) {
        printf("\n\n");
        printf("Aluno aprovado!\n");
        }else {
        printf("\n\n");
        printf("Valor invalido!\n");
        }
    }else if (media >= 5) {
        if (media < 7) {
        printf("\n\n");
        printf("Aluno em recuperacao!\n");
        }else {
        printf("\n\n");
        printf("Valor invalido!\n");
        }
    }else if (media < 5) {
        if (media >= 0) {
        printf("\n\n");
        printf("Aluno reprovado!\n");
        }else {
        printf("\n\n");
        printf("Valor invalido!\n");
        }
    }else {
        printf("\n\n");
        printf("Valor invalido!\n");
    }

}
