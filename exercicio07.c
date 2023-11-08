#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 int seletor;
 printf("======== METAL SLUG 2 ======\n");
 printf("1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações\n");
 scanf("%d", &seletor);

 switch (seletor)
 {
 case 1:
   system("cls || clear");
   printf("... Iniciando Novo Jogo ...");
  break;
 case 2:
  system("cls || clear");
   printf("... Carregando ...\n");
  break;
 case 3:
  system("cls || clear");
   printf("<< Configurações Gerais >>\n");
  break;
 
 default:
  system("cls || clear");
 printf("opção incorreta\n");

  break;
 }
 
return 0;



}