#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
int nota;
  printf("digite a nota do aluno\n");
  scanf("%d", &nota);
 
  
if (nota>=9)
{
  printf("EXCELENTE");
 
}else if (nota>=7 && nota<9)
{
  printf("BOM");
}
else if (nota >=5 && nota <7 )
{
  printf("RAZOÁVEL");
  
} else
{
  printf("INSUFICIENTE");
}

return 0;

}