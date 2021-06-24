#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 13
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int horasTrabajadas;
	int cat;
	int sueldo;
	
	printf("Ingresar la cantidad de horas trabajadas por el empleado: ");
	scanf("%d", &horasTrabajadas);
	
	printf("Ingresar la categoria del empleado: ");
	scanf("%d", &cat);
	
	switch(cat){
		case 1:
			sueldo=horasTrabajadas*50;
		break;
		case 2:
			sueldo=horasTrabajadas*70;
		break;
		case 3:
			sueldo=horasTrabajadas*80;
		break;
		default: printf("No es una categoria valida.\n");
	}
	
	printf("El sueldo del empleado es de $ %d. \n",sueldo);
	
	system("pause");
}

