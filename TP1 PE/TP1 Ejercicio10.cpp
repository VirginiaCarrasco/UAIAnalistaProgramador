#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Alumna: Carrasco, Virginia Sofia
Ejercicio:Tp1 Ejercicio 10
Fecha:19-04-2021
version:1
*/
int main(){
	int vendedor=0;
	float autosVendidos=0;
	float valorVehiculo=0;
	float sueldoBasico=500;
	float plusSueldo=0;
	float sueldoVendedor=0;
	
	printf("Ingrese la identificacion del vendedor: ");
	scanf("%d",&vendedor);
	
	printf("Ingrese la cantidad de autos vendidos por el vendedor: ");
	scanf("%f",&autosVendidos);
	
	printf("Ingrese el precio del modelo de auto vendido: ");
	scanf("%f",&valorVehiculo);
	
	plusSueldo=(valorVehiculo*autosVendidos)*0.1;
	
	sueldoVendedor=sueldoBasico+plusSueldo+(50*autosVendidos);
	
	printf("El sueldo del vendedor %d es de %.2f pesos.",vendedor,sueldoVendedor);

}

