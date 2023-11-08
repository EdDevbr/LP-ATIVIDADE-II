#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float valorCompra;
    int diaDaSemana;
    float valorCompraComDesconto;
    printf("Qual valor da compra?\n");
    scanf("%f", &valorCompra);
    printf("Se for fim de semana (1) senão digite (2)\n");
    scanf("%d", &diaDaSemana);

    

    if (diaDaSemana ==1 && valorCompra>= 100)
    {
      valorCompraComDesconto = valorCompra - ((valorCompra * 15)/100);
      valorCompra=(valorCompra * 15)/100; 
      printf("O Cliente tem direito a um desconto de R$ %.2f\n",valorCompra);
      printf("O valor a ser cobrado é R$ %.2f\n",valorCompraComDesconto);
      
    }else
    {
      valorCompraComDesconto = valorCompra - ((valorCompra * 10)/100);
      valorCompra=(valorCompra * 10)/100;
      printf("O Cliente tem direito a um desconto de R$ %.2f\n",valorCompra);
      printf("O valor a ser cobrado é R$ %.2f\n",valorCompraComDesconto);
    }
    
   
    return 0;


}