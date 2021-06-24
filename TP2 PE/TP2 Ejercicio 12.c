#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 12
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int sueldo;
	int cat;
	int antiguedad;
	
	printf("Ingresar el sueldo del empleado: ");
	scanf("%d", &sueldo);
	
	printf("Ingresar la categoria del empleado: ");
	scanf("%d", &cat);
	
	printf("Ingresar la antiguedad del empleado: ");
	scanf("%d",&antiguedad);
	
	if (antiguedad>5){
		printf("El sueldo total del empleado es de $ %d .\n",sueldo);
	}
	
	system("pause");
}

