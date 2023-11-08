#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL,"");
    char codigoAcesso[300];
    char validacaoCodigo[300] = "123";

    do
    {
        printf("Digite seu código de Acesso:\n");
        gets(codigoAcesso);
        if (strcmp(codigoAcesso, validacaoCodigo)==0)
        {
          system("cls || clear");
         printf("Seja bem vindo!");
        }
        else {
         system("cls || clear");
        printf("Código inválido\n");
        }
    }
    while ( strcmp(codigoAcesso, validacaoCodigo)!=0);

return 0;


}