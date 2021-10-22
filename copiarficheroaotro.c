// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 11: Copiar Ficheros de uno a otro.

// En el presente ejercicio se copiara el contenido de un fichero 
//llamdo pricipal a otro cuyo nombre es "destino".


#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *archivoprincipal;
    FILE *archivodestino;
    char funcionprincipal[100];
    char funciondestino[100];

    char ch;

    /* Ingresar las direcciones de los ficheros a copiar */
    printf("Ingrese la direccion del fichero principal: ");
    scanf("%s", funcionprincipal);
    printf("Ingrese la direccion del fichero de destino: ");
    scanf("%s", funciondestino);

    /* 
     * Abrir el principal in 'r' and 
     * el de destino con 'w'  
     */
    archivoprincipal  = fopen(funcionprincipal, "r");
    archivodestino    = fopen(funciondestino,   "w");

    /* fopen() return NULL no se puede abrir o acceder al fichero. */
    if (archivoprincipal == NULL || archivodestino == NULL)
    {
        /* No se puede abrir por lo tanto tenemos que salir */
        printf("\nNo se puede abrir el archivo.\n");
        exit(EXIT_FAILURE);
    }


    /*
     * copiar el contenido de los ficheros caracter por caracter.
     */
    ch = fgetc(archivoprincipal);
    while (ch != EOF)
    {
        /* escribir el archivo de destino */
        fputc(ch, archivodestino);

        /* leer el siguiente caracter del archivo o fichero principal */
        ch = fgetc(archivoprincipal);
    }


    printf("\nFicheros copiados con exito.\n");


    /* Ffianlmente cerrar el los ficheros */
    fclose(archivoprincipal);
    fclose(archivodestino);

    return 0;
}