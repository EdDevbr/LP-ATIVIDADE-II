#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
 int seletor;
 printf("Escolha seu Indioma de preferência!\n");
 printf(" (1 - Inglês, 2 - Espanhol, 3 - Francês)\n");
 scanf("%d", &seletor);

 switch (seletor)
 {
 case 1:
   system("cls || clear");
   printf("welcome!\n");
  break;
 case 2:
  system("cls || clear");
   printf("¡bienvenida!\n");
  break;
 case 3:
  system("cls || clear");
   printf("accueillir!!\n");
  break;
 
 default:
  system("cls || clear");
 printf("Número incorreto\n");

  break;
 }
 
return 0;



}