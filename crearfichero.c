// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 11: Crear un Fichero.

// En el presente ejercicio se creara un fichero".

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *archivo;

   // ucolocamos la locacion que nos parezca para nuestro archivo
   archivo = fopen("C:\\destino.txt","w");

   if(archivo == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
	// ingresamos el valor numerico que queremos guardar en el fichero
   printf("Enter num: ");
   scanf("%d",&num);
	//imprimimos lo que hemos digitalizado en el fichero y finalmente lo cerramos
   fprintf(archivo,"%d",num);
   fclose(archivo);

   return 0;
}