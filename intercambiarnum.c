// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 10: Intercambiar numeros.

// En el presente ejercicio se intercambiaran los numeros ".
#include <stdio.h>
 
int main()
{
	//inicializacion de las variables
   int x, y, *a, *b, temp;
 	// pedimos el valor de los dos numeros
   printf("Ingrese el valor de X y Y\n");
   scanf("%d%d", &x, &y);
 
   printf("Antes del intercambio\nx = %d\ny = %d\n", x, y);
 	//asignamos a cada variable su respectivo valor
   a = &x;
   b = &y;
 	// Meidante los punteros y una variables auxiliar conseguimos cambiar
	//el valor de los numeros
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("Despues del intercambio\nx = %d\ny = %d\n", x, y);
 
   return 0;
}