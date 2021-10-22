// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 12: Ordenamiento Capas.

// En el presente ejercicio se ordenaran los numeros ".
#include <stdio.h>

// funcion la cual utilizaremos como medio de ordenamiento en estes caso
// por medio de capas como lo dice su nombre
// utilizara metodos iterativos para poder dar solucion al problema
void ordenamientoCapas(int arr[], int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }
}
int main()
{
   
    int arr[30];
    int k,  num;
    printf("Ingresar numeros de elementos : ");
    scanf("%d", &num);
    printf("\nIngresar %d numeros: ", num);
    //pasamos al arreglo los numeros que desemos
    for (k =  0 ; k < num; k++)
    {
        scanf("%d", &arr[k]);
    }
    //gracias al ordenaiento que hicimos en la funcion de arriba 
    //en este momento solo tenemos que llamarla y despues imprimir 
    //el arreglo ya ordenado
    ordenamientoCapas(arr, num);
    printf("\n El array ordenado es : ");
    for (k = 0; k < num; k++)
        printf("%d ", arr[k]);
    return 0;
}