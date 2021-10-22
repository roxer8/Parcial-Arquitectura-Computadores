// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 12: Ordenamiento Burbuja.

// En el presente ejercicio se ordenaran los numeros ".
#include <stdio.h>

int main()
{
  int array[100], n, c, d, cambiar;

  printf("Ingrese el numero de elementos\n");
  scanf("%d", &n);

  printf("Ingrese %d enteros\n", n);
  //implementacion de funciones iterativas
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* para orden de decrecimiento '<' en lugar de '>' */
      {
        cambiar       = array[d];
        array[d]   = array[d+1];
        array[d+1] = cambiar;
      }
    }
  }
  // mostrar la lista ordenada
  printf("Lista ordenada en orden ascendente:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}