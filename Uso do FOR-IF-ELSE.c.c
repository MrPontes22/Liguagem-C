#include   <stdlib.h>
#include   <string.h>
#include   <locale.h>
#include   <stdio.h>

int main()
{
        setlocale(LC_ALL,"portuguese");

  float nota1, nota2, nota3, media;
    int contalunos;
   char nome[50];

    for (contalunos =1; contalunos <= 3; contalunos++)

    {
        printf("\nDigite o nome do aluno: ");
        scanf("%s", &nome);

        printf("\nDigite a primeira nota: ");
        scanf(" %f", &nota1);

        printf("\nDigite a segunda nota: ");
        scanf(" %f", &nota2);

        printf("\nDigite a terceira nota: ");
        scanf(" %f", &nota3);


        media = (nota1 + nota2 + nota3) / 3;

        printf("\n\n");
        printf("Nome: %s\n", nome);
        printf("Nota 1: %.2f\n", nota1);
        printf("Nota 2: %.2f\n", nota2);
        printf("Nota 3: %.2f\n", nota3);
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

}
