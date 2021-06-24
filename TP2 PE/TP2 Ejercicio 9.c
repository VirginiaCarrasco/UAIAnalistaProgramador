#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 9
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int valorHora;
	int horasTrabajadas;
	int sueldoTotalEmpleado;
	int premio1=100;
	int premio2=100;
	
	printf("Ingresar valor de la hora trabajada: ");
	scanf("%d", &valorHora);
	
	printf("Ingresar la cantidad de horas trabajadas por el empleado: ");
	scanf("%d", &horasTrabajadas);
	
	sueldoTotalEmpleado=valorHora*horasTrabajadas;
	
	
	if (horasTrabajadas>50){
		sueldoTotalEmpleado=sueldoTotalEmpleado+premio1;
	}
	
	if (horasTrabajadas>150){
		sueldoTotalEmpleado=sueldoTotalEmpleado+premio2;
	}

	printf("El sueldo total del empleado es de $ %d .\n",sueldoTotalEmpleado);
	
	system("pause");
}

