// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 11: Leer un Fichero.

// En el presente ejercicio leera un fichero ".
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *archivo;
	// colocamos la direccion del fichero que previamente hemos creado
   if ((archivo = fopen("C:\\program.txt","r")) == NULL){
       printf("Error abriendo archivo");

       // el programa exit funciona en el caso que el puntero del fichero
	   //retorne NULL.
       exit(1);
   }
	
	//escaneamos el archivo para saber cual es e contenido de el.
   fscanf(archivo,"%d", &num);
	// lo imprimimos para que el usuario sepa que fue lo que se escaneo.
   printf("Valor de n=%d", num);
   fclose(archivo); 
  
   return 0;
}