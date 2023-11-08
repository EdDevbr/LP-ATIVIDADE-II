#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   

    setlocale(LC_ALL, "");
    int numero;
    int contador = 0;
    float mediaPar=0;
    int somaPar =0;
    float mediaImpar=0;
    int somaImpar=0;
    int soma = 0;
    int par = 0;
    int impar = 0;
    float media = 0;

    do
    {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        if (numero > 0)
        {
            contador++;
            soma += numero;
            if (numero % 2 == 0)
            {
                par++;
                somaPar += numero;
            }
            else
            {
                impar++;
                somaImpar += numero;
            }
        }

    } while (numero >0);

    media = soma / contador;
    mediaPar = somaPar / par;
    mediaImpar = somaImpar / impar;

    printf("Quantidade de numeros pares %d \n", par);
    printf("Quantidade de numeros ímpares %d \n", impar);
    printf("A média dos números pares é: %.2f \n", mediaPar);
    printf("A média dos números ímpares é: %.2f\n", mediaImpar);
    printf("A média geral é: %.2f\n", media);

    return 0;


}