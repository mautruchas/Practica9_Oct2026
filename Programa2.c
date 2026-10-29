/*
López COria Mauricio
Arreglos unidimensionales
Programa 2
*/
#include <stdio.h>
int main ()
{
  int lista[10], elem = 0;

  //validación
  do
    {
       printf("\nDame un número entre 1 y 10 para indicar la longitud arreglo\n");
       scanf("%i",&elem);
    } 
    while (elem < 1 || elem >10);
    //ingresar valores al arreglo
    for(int i = 0; i < elem; i++)
    {
      printf("Da un número entero para el elemento %i del arreglo: ", i +1);
      scanf("%i", &lista[i]);
    }
    //imprimir valores del arreglo
    for(int j = 0; j < elem; j++)
    {
      printf("%i ", lista[j]);
    }
    printf("\n\n");
    return 0;
}
