#include   <stdlib.h>
#include   <string.h>
#include   <locale.h>
#include   <stdio.h>

int main(){

setlocale(LC_ALL,"portuguese");

float altura, peso, imc;

printf("Digite sua altura: ");
scanf(" %f", &altura);
printf("Digite seu peso: ");
scanf(" %f", &peso);

imc = peso / (altura * altura);
printf("IMC: %0.2f\n", imc);

if(imc < 18.5){
    printf("Abaixo do peso\n");
    }
    else{printf("Peso normal\n");
    }
        if(imc >= 18.5 && imc <= 24.9){
        printf("Peso normal\n");
        }
            else if(imc >= 25 && imc <= 29.9){
            printf("Sobrepeso\n");
            }
                else if(imc >= 30 && imc <= 34.9){
                printf("Obesidade grau 1\n");
                }
                    else if(imc >= 35 && imc <= 39.9){
                    printf("Obesidade grau 2\n");
                    }
                        else if(imc >= 40){
                        printf("Obesidade grau 3\n");
                        }
}



