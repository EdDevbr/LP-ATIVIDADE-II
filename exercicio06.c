#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 int seletor;
 float valorCamiseta = 25.00;
 float valorCalca = 15.00;
 float valorSapato = 45.00;
 printf("Insira o c�digo do produto:\n");
 printf("1 - Camiseta, 2 - Cal�a, 3 - Sapato\n");
 scanf("%d", &seletor);

 switch (seletor)
 {
 case 1:
   system("cls || clear");
   printf("Camiseta - R$%.2f\n",valorCamiseta);
  break;
 case 2:
  system("cls || clear");
   printf("Cal�a - R$%.2f\n", valorCalca);
  break;
 case 3:
  system("cls || clear");
   printf("Sapato - R$%.2f\n", valorSapato);
  break;
 
 default:
  system("cls || clear");
 printf("c�digo incorreto\n");

  break;
 }
 
return 0;



}