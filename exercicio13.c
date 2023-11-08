#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   
setlocale(LC_ALL, "");
int numero1;
int numero2;

    printf("Digite o primeiro numero:");
    scanf("%d",&numero1);
    printf("Digite o segundo numero:");
    scanf("%d",&numero2);

    if (numero1>numero2)
    {
        printf("O primeiro numero e maior\n");

    }
   else
   {
       printf("O segundo numero e maior\n");

   }
   return 0;


}