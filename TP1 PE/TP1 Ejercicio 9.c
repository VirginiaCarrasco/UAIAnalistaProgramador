#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Alumna: Carrasco, Virginia Sofia
Ejercicio:TP1 Ejercicio 8
Fecha:19-04-2021
version:1
*/
int main(){
	int operario=0;
	int valorHora=0;
	int horasTrabajadas=0;
	int sueldo=0;
	
	printf("Ingrese la identificacion del operario: ");
	scanf("%d",&operario);
	
	printf("Ingrese cantidad de horas trabajadas por el operario: ");
	scanf("%d",&horasTrabajadas);
	
	valorHora=10;
	
	sueldo=valorHora*horasTrabajadas;
	
	printf("El sueldo del operario %d es de %d pesos.",operario,sueldo);
	
}
