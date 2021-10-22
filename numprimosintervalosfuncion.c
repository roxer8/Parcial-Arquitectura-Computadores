// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 10: Intercambiar numeros.

// En el presente ejercicio se intercambiaran los numeros ".
#include <stdio.h>
int verificarNumeroPrimos(int n);
int main() {
    int n1, n2, i, marcador;
    printf("Ingrese dos enteros positivos: ");
    scanf("%d %d", &n1, &n2);
    printf("numeros primos entre %d and %d son: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {

        // el mercador se encargara de tomar el valor que le devuelva 
        //la funcion que verifica si son numeros primos
        marcador = verificarNumeroPrimos(i);

        if (marcador == 1)
            printf("%d ", i);
    }
    return 0;
}

// funcion definida para atyudar a resolver el problema 
//la cual permite saber si el numero dado es un numero primio o no
int verificarNumeroPrimos(int n) {
    int j, marcador = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            marcador = 0;
            break;
        }
    }
    return marcador;
}
