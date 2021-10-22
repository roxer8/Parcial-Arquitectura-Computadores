// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 8: Cambiar los caracteres de un string por otro.

// En el presente ejercicio se cambiaran los caracteres unos por otros".
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch, Nuevoch;
  	int i;
 
  	printf("\n Ingrese Cualquier String:  ");
  	gets(str);
  	//caracter que va a ser cambiado
  	printf("\n Porfavor ingrese el caracter que esta buscando:  ");
  	scanf("%c", &ch);
  	
  	getchar();
  	// pedimos el nuevo caracter por el que quiere cambiar al anterior
  	printf("\n Porfavor ingrese el nuevo caracter :  ");
  	scanf("%c", &Nuevoch);
  	//utilizando un metodo iterativo conseguimos dar con la repsuesta
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			str[i] = Nuevoch;
 		}
	}
	//imprimimos la respuesta dada opr el metodo iterativo
	printf("\n el string final despues de reeemplazar todas las aparaciones de '%c' con '%c' = %s ", ch, Nuevoch, str);
	
  	return 0;
}