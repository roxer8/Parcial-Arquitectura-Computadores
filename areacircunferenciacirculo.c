// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Samuel Medina y Rober Burgos

// Seccion 9: Area y circuferencia de un circulo.

// En el presente ejercicio se calculara el area y circunferencia del circulo.
#include <stdio.h>
#include <math.h> 
//declaracion de las funciones
double getDiametro(double radio);
double getCircunferencia(double radio);
double getArea(double radio);


int main() 
{
    //varriables y datos como el radio importantes 
    //para la ejecucion debida del programa
    float radio, dia, circ, area;
    

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    
    dia  = getDiametro(radio);       
    circ = getCircunferencia(radio); 
    area = getArea(radio);           
    
    printf("Diametro del circulo = %.2f unidades\n", dia);
    printf("Circunferencia del circulo = %.2f unidades\n", circ);
    printf("Area del circulo = %.2f unidades cuadradas", area);
    
    return 0;
}
// a todas las funciones se les pasa como parametro el dato de tipo
// double el radio
//funcion la cual nos permite obtener el diametro del circulo
double getDiametro(double radio) 
{
    return (2 * radio);
}
//funcion la cual nos permite obtener la circunferencia o longitud del circulo
double getCircunferencia(double radio) 
{
    return (2 * M_PI * radio); 
}
//funcion la cual nos permite obtener el Area del circulo
double getArea(double radio)
{
    return (M_PI * radio * radio); 
}