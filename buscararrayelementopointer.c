// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 10: BUscar un elemento con el array.

// En el presente ejercicio se buscara un elemento de un arreglo con punteros.
#include<stdio.h>
void buscar(int *x, int *y);
int main()
{
    int a[5], n, i;
    int *pa, *pn;
    pa = &a[0], pn = &n;
    //Ingresa el numero de elmenos del array
    printf("Ingresar un elemento en una array: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",pa+i);
    }
    //Elemento a buscar en el array
    printf("Ingresar un elemento ha buscar: ");
    scanf("%d",pn);
    // Se utliza la funcion buscar para ver si fue encontrado 
    buscar(&a[0],pn);

    return 0;
}
//Funcion que permite decidir si el elemento a buscar a sido encontrado o no
void buscar (int *x, int *y){
	
    int i, f=0;

    for (i=0;i<5;i++)
    {
        if ( *(x+i) == *y)
        {
            f=1;
            break;
        }
        else
            continue;
    }

    if (f==1)
        printf("Encontrado.\n");

    else
        printf("No fue encontrado.\n");
}