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
 
printf("Digite o primeiro número:\n");
 scanf("%d", &numero1);
printf("Digite o segundo número:\n");
 scanf("%d", &numero2);
printf("Digite a operação:\n");
 scanf("%s", &operacao);
 
 if (strcmp(operacao, "+")== 0)
 {
   printf("A soma dos números é: %d", numero1+numero2);
 }else if(strcmp(operacao,"-")== 0)
 {
    printf("A divisão dos números é: %d", numero1-numero2);
 }else
 {
printf("Opção inválida");
 }
 


return 0;


}