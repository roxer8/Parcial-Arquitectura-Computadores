// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 8: Remover los espacios en blanco de un string.

// En el presente ejercicio se removeran los espacios en blanco de un string".
#include <stdio.h>
#include <stdlib.h>

void quitaespacios(char cadena [100], char cadenasin[100]);
int main(){
 char cad[100],cadsin[100],vaciar;
 
 printf("Introduzca la cadena: ");
 
 fgets(cad, 100,stdin);
 
 quitaespacios(cad,cadsin);
 

 printf("La cadena es %s",cadsin); 
 
 return 0;
}
//funcion que mediante un metodo iterativo consigue dar con el
//el resultado esperado en este caso utilazamos un nuevo
//arreglo para ahi guardar el nuevo string que ha saliso
void quitaespacios(char cadena [100], char cadenasin[100]){
 int i,j;
 i=0;
 j=0;
 	while (cadena[i]!='\0') 
 	{
  		if(cadena[i]!=' '){
   			cadenasin[j]=cadena[i];
   			j++;
  		}
  			i++;
	}

}