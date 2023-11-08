#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   
setlocale(LC_ALL, "");
    int i;
    float nota;
    float soma=0;
    float media;

    for (i = 0; i < 3; i++)
    {
       
       printf("Digite a %dº nota:\n",i+1);
       scanf("%f",&nota);
    soma += nota;
    
    } 
    
    
    media = soma/3;

    printf("Sua media é %.2f",media);

    return 0;


}