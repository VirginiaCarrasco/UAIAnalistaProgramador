#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 3 Ejercicio 1
Fecha:11-5-2021
version:1

consigna:Ingresar 25 números, calcular su promedio e imprimirlo
*/
int main(int argc, char *argv[]) {

	int i;
	int cantidadNumeros;
	float numero;
	float sumaNumeros;
	float promedio;
	sumaNumeros=0;
	cantidadNumeros=0;
	
	system("cls");
	
	for(i=1;i<=25;i++)
	{
	printf("Ingrese el numero %i: ",i);
	scanf("%f", &numero);
	sumaNumeros=sumaNumeros+numero;
	cantidadNumeros++;
	}
	
	promedio=sumaNumeros/cantidadNumeros;
	
	printf("El promedio de los numeros ingresados es %.2f \n",promedio);
	
	system("pause");
}


