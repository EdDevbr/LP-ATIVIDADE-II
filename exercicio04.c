#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
int idade;
  
  do
  {
  printf("====== SISTEMA DE ACESSO =======\n");
  printf("digite sua idade\n");
  scanf("%d", &idade);
  if (idade>=18)
  {
    printf("ACESSO PERMITIDO\n");
  }else
  {
   printf("ACESSO NEGADO\n");
  }
  
  
  } while (idade <18);
  
 
return 0;



}