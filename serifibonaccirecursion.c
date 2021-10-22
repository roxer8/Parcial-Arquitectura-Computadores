// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 8: Remover los espacios en blanco de un string.

// En el presente ejercicio se hara la serie de fibonacci de forma recursiva".
#include <stdio.h>
int fibo(int);
 
int main()
{
    int num;
    int resultado;
 
    printf("Ingrese un numero entero a la serie de Fibonacci: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Si el numero es negativo es imposible realizar la operacion.\n");
    }
    else
    {
        resultado = fibo(num);
        printf("El %d numero en la serie de Fibonacci es %d\n", num, resultado);
    }
    return 0;
}
//en esta funcion tenemos el caso base el cual es caundo el numero 
//al que se le ha pedido clacular la serie de fibonacci es 1 o 0 
//y si no mandamos a llamar a la misma funcion dentro de la misma 
//pero esta vez sumando los dos numeros antecesores al numero
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}