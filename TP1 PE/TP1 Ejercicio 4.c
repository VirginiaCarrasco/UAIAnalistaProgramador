#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 1 Ejercicio 4
Fecha:19-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	int lado1=0;
	int lado2=0;
	int lado3=0;
	int perimetroTriangulo;
	
	printf("Ingrese la medida de uno de los lados del triangulo: ");
	scanf("%d",&lado1);
	
	printf("Ingrese la medida de otro lado del triangulo: ");
	scanf("%d",&lado2);
	
	printf("Ingrese la medida del ultimo lado del triangulo: ");
	scanf("%d",&lado3);
	
	perimetroTriangulo= lado1+lado2+lado3;
	
	printf("El perimetro del triangulo es: %d",perimetroTriangulo);
	
}

