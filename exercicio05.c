#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
 int seletor;
 printf("Escolha seu Indioma de prefer�ncia!\n");
 printf(" (1 - Ingl�s, 2 - Espanhol, 3 - Franc�s)\n");
 scanf("%d", &seletor);

 switch (seletor)
 {
 case 1:
   system("cls || clear");
   printf("welcome!\n");
  break;
 case 2:
  system("cls || clear");
   printf("�bienvenida!\n");
  break;
 case 3:
  system("cls || clear");
   printf("accueillir!!\n");
  break;
 
 default:
  system("cls || clear");
 printf("N�mero incorreto\n");

  break;
 }
 
return 0;



}