// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 8: Buscar el número de veces que un carácter aparece en un String.


// En el presente ejercicio se buscaran el numero de caracteres que 
//aparecen en un string".
#include <string.h>

int main()
{
    char s[1000],c;  
    int i;
 
    printf("Ingrese un String : ");
    gets(s);
    printf("Ingrese el caracter a buscar : ");
    c=getchar();
    // mediante una funcion iterativa que vaya recorriendo todo el arreglo
    //y que vayacomparando en que partes del String se parece al caracter que 
    //se esta buscando
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
		    printf("El caracter '%c' fue encontrado en la posicion: %d\n ",c,i);
 
		}
 	}
     
    return 0;
}