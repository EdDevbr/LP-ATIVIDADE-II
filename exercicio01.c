#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int temperatura;
    printf("Qual a temperatura?\n");
    scanf("%d",&temperatura);
    if (temperatura>25 )
    {
       printf("O clima est� ensolarado");
    }
    else if (temperatura>=15 && temperatura <=25)
    {
       printf("O clima est� nublado");
      
    }
    else
    {
       printf("O clima est� chuvoso");
    }
    
    
    return 0;


}