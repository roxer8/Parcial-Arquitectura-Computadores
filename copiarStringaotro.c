// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 11: Copiar Ficheros de uno a otro.

// En el presente ejercicio se copiara el contenido de un fichero 
//llamdo pricipal a otro cuyo nombre es "destino".

#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40

int main()
{
	char src[] = "Estoy aqui";
	char dest[DEST_SIZE] = "Amigable";

	char *p = dest + 5;

	strcpy(p, src);
	printf(dest);

	return 0;
}
