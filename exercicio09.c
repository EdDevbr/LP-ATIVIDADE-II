#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 int numero;
 int validacao;
 

 
printf("Digite um n�mero:");
 scanf("%d", &numero);
 if (numero %2 !=0 && numero/numero==1)
 {
   validacao=1;
 }else
 {
    validacao=2;
 }
 
switch (validacao)
{
case 1:
    printf("N�mero primo");
    break;
case 2:
    printf("N�mero n�o primo");
    break;

default:
    break;
}


return 0;


}