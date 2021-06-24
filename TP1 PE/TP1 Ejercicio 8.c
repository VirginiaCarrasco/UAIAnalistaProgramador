#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Alumna: Carrasco,Virginia Sofia
Ejercicio:tp1 ejercicio 8
Fecha:19-4-2021
version:1
*/
int main()
{
	int emp=0;
	int valorHora=0;
	int horasTrabajadas=0;
	int sueldo=0;
	
	printf("Ingrese el numero de empleado: ");
	scanf("%d",&emp);
	
	printf("Ingrese el valor por hora trabajada: ");
	scanf("%d",&valorHora);
	
	printf("Ingrese la cantidad de horas trabajadas por el empleado: ");
	scanf("%d",&horasTrabajadas);
	
	sueldo= valorHora*horasTrabajadas;
	
	printf("El sueldo del empleado %d es de %d pesos",emp,sueldo);
	
}
