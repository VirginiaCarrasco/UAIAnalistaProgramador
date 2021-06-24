#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Alumna: Carrasco, Virginia Sofia
Ejercicio: tp 1 ejercicio 7
Fecha:19-04-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	float valor1=0;
	float valor2=0;
	float suma=0;
	float producto=0;
	float resta=0;
	
	printf("Ingrese un numero: ");
	scanf("%f",&valor1);
	
	printf("Ingrese otro numero: ");
	scanf("%f",&valor2);
	
	suma=valor1+valor2;
	
	producto=valor1*valor2;
	
	resta=valor1-valor2;
	
	printf("La suma de los valores ingresados es %.2f. \n" "El producto entre los valores ingresados es %.2f. \n" "La resta del primer valor menos el segunda valor ingresado es %.2f. \n",suma,producto,resta);
	

}
