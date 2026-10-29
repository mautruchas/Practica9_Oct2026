/*López Coria Mauricio
Ejercicio en clase
Calculadora*/

#include <stdio.h>

float suma(float num1, float num2);
float resta(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

void main()
{
  int elec = 0;
  float n1, n2, res;

  do
  {
    printf("Elije una operación: \n");
    printf("1 - Suma\n");
    printf("2 - Resta\n");
    printf("3 - Multiplicación\n");
    printf("4 - División\n");
    scanf("%i", &elec);
  }while(elec < 1 || elec > 4);

  printf("Dame la primera cifra: ");
  scanf("%f", &n1);
  printf("Dame la segunda cifra: ");
  scanf("%f", &n2);

  switch (elec)
  {
  case 1:
    res = suma(n1, n2);
    break;
  case 2:
    res = resta(n1, n2);
  case 3:
    res = mult(n1,n2);
    break;
  case 4:
    res = div(n1, n2);
    default:
    break;
  }

  printf("el reultado de la operación es: %f\n\n", res);
}

float suma(float num1, float num2)
{
  float res;
  res = num1 + num2;
  return res;
}
float resta(float num1, float num2)
{
  float res;
  res = num1 - num2;
  return res;
}
float mult(float num1, float num2)
{
  float res;
  res = num1 * num2;
  return res;
}
float div(float num1, float num2)
{
  float res;
  res = num1 / num2;
  return res;
}
