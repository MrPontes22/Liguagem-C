#include   <stdlib.h>
#include   <string.h>
#include   <locale.h>
#include   <stdio.h>

int main(){

setlocale(LC_ALL,"portuguese");

int num;
printf ("Digite um n�mero: ");
scanf("%d",&num);
while (num!=0)
{
printf ("O n�mero lido foi = %d\n\n",num);
printf ("Digite um n�mero: ");
scanf("%d",&num);
}


}
