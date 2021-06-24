#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 1 Ejercicio 6
Fecha:19-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	float lado1=0;
	float lado2=0;
	float diagonalPrincipal=0;
	float perimetro=0;
	float superficie=0;
	
	printf("Ingrese uno de los lados del rectangulo:");
	scanf("%f",&lado1);
	
	printf("Ingrese otro lado del rectangulo: ");
	scanf("%f",&lado2);
	
	diagonalPrincipal=sqrt(pow(lado1,2)+pow(lado2,2));
	
	perimetro=((lado1*2)+(lado2*2));
	
	superficie= lado1*lado2;
	
	printf("La diagonal principal del rectangulo es %.2f \n. El perimetro es %.2f y la superficie es %.2f \n.", diagonalPrincipal,perimetro,superficie);
	
}
