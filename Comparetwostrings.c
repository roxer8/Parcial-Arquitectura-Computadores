// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 7: Comparar si dos String son iguales

// En el presente ejercicio se comparan dos string para ver si son iguales.

#include <stdio.h>
#include <string.h>

int main() {
  //declaracion de las varaibles que contendran los string 
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int resultado;

  // comparando Strings str1 and str2
  //mediante la funcio strcmp();
  resultado = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", resultado);

  // comparando Strings str1 and str3
    //mediante la funcio strcmp();
  resultado = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", resultado);

  return 0;
}