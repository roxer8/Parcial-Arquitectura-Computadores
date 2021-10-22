// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 10: Suma de numeros con punteros.

// En el presente ejercicio se sumara dos numeros pero esta vez con punteros".
#include <stdio.h>
int main()
{
   int primero, segundo, *p, *q, suma;

   printf("Ingresar dos enteros para sumar\n");
   scanf("%d%d", &primero, &segundo);
	//inicalizamos las varibles con sus respectivos valores
   p = &primero;
   q = &segundo;
	//sumamos los punteros los cuales apuntaran al valor de cada 
	//uno y podran ser operados
   suma = *p + *q;
	//terminamos dando imprimiendo el resultado
   printf("Suma de los terminos = %d\n", suma);

   return 0;
}