#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 int numero1;
 int numero2;
 char operacao[30];
 
printf("Digite o primeiro n�mero:\n");
 scanf("%d", &numero1);
printf("Digite o segundo n�mero:\n");
 scanf("%d", &numero2);
printf("Digite a opera��o:\n");
 scanf("%s", &operacao);
 
 if (strcmp(operacao, "+")== 0)
 {
   printf("A soma dos n�meros �: %d", numero1+numero2);
 }else if(strcmp(operacao,"-")== 0)
 {
    printf("A divis�o dos n�meros �: %d", numero1-numero2);
 }else
 {
printf("Op��o inv�lida");
 }
 


return 0;


}