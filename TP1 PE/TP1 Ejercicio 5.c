#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 1 Ejercicio 5
Fecha:19-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	float cateto1=0;
	float cateto2=0;
	float hipotenusa=0;
	float perimetro=0;
	float superficie=0;
	
	printf ("Ingrese uno de los catetos del triangulo rectangulo: ");
	scanf("%f",&cateto1);
	
	printf ("Ingrese el otro  cateto del triangulo rectangulo: ");
	scanf("%f",&cateto2);
	
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	perimetro=hipotenusa+cateto1+cateto2;
	
	superficie= (cateto1*cateto2)/2;
	
	printf("La hipotenusa del triangulo es %.2f. \n El perimetro es %.2f. \n La superficie es %.2f.",hipotenusa,perimetro,superficie);
	
}
