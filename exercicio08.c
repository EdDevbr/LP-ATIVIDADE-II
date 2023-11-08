#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 int numero,i;
 

 
printf("Digite um número:");
 scanf("%d", &numero);
 for ( i = 0 ; i <= numero; i++)
    {
        printf("%d\n", numero-i);

    }
  
return 0;


}