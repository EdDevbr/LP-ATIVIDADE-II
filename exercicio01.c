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
       printf("O clima está ensolarado");
    }
    else if (temperatura>=15 && temperatura <=25)
    {
       printf("O clima está nublado");
      
    }
    else
    {
       printf("O clima está chuvoso");
    }
    
    
    return 0;


}