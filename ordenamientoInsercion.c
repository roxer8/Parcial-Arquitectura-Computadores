// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 12: Ordenamiento por Insercion.

// En el presente ejercicio se ordenaran los numeros ".
#include<stdio.h>
int main(){

   //Aquí i & j para contadores de bucle, temp para el recuento de 
	//intercambio para un número total de elementos, número[] 
	//almacenar los números de entrada en una matriz. 
	//Puede aumentar o disminuir el tamaño de la matriz de números 
	//según el requisito
   int i, j, contador, temp, numero[25];

   printf("Cuantos numeros desea ingresar ?: ");
   scanf("%d",&contador);

   printf("Ingresar el %d elemento: ", contador);
   // Este bucle almacenaría los números de entrada en la matriz
   for(i=0;i<contador;i++)
      scanf("%d",&numero[i]);

   // Implementación del algoritmo de ordenación de inserción
   for(i=1;i<contador;i++){
      temp=numero[i];
      j=i-1;
      while((temp<numero[j])&&(j>=0)){
         numero[j+1]=numero[j];
         j=j-1;
      }
      numero[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<contador;i++)
      printf(" %d",numero[i]);

   return 0;
}