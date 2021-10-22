// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 7: Encontrar el largo de un String.

// En el presente ejercicio calcularemos cuanto es el largo de un string".
#include <string.h>
#include <stdio.h>

int main(void) {
  //Colocamos la String que desamos saber su longitud 
  char name[7] = "Rober";
  //mediante la funcion strlen() determinamos cuanto es el largo
  int length = strlen(name);
  // imprimimos el resultado
  printf("Largo del nombre : %u", length);

	return 0;
}