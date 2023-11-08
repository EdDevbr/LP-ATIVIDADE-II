#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   

    setlocale(LC_ALL, "");
    int opcao;
    float km;
    float milhas;
    float grauCelsius;
    float grauF;
    
    

    do
    {
        printf("PARA TRANSFORMAR KM EM MILHAS DIGITE (1) \n");
        printf("PARA TRANSFORMAR CELSIUS EM FAHRENHEIT DIGITE(2) \n");
        scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
       printf("Digite a quilometragem:\n");
       scanf("%f",&km);
       milhas= km*0.621;
       printf("%.2f KM é  o mesmo que %.2f milhas\n",km,milhas);
        break;
    case 2:
        printf("Digite grau Celsius:\n");
        scanf("%f",&grauCelsius);
       grauF= (grauCelsius*9/5)+32;
       printf("%.2f graus Celcius é o mesmo que %.2f graus Fahrenheit \n",grauCelsius,grauF);
        break;
    

    default:
        printf("Opção inválida\n");
        break;
    }
      
        

    } while (opcao!= 0);

    

    return 0;


}