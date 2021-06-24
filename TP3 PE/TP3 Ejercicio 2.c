#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 3 Ejercicio 2
Fecha:11-5-2021
version:1

consigna:Ingresar 20 notas y nombres de alumnos, indicar e imprimir los aplazados ( menos de 4) y
el nombre a quien pertenece esa nota.
*/
int main(int argc, char *argv[]) {

	int i;
	char nombre[50];
	int nota;
	
	system("cls");
	
	for(i=1;i<=20;i++)
	{
		printf("Ingrese el nombre del alumno %d ",i);
		scanf("%s", &nombre);
	
		printf("Ingrese la nota de %s .\n", nombre);
		scanf("%d", &nota);
		
		if(nota<4)
		{
			printf("%s  desaprobo porque tiene nota %d \n", nombre, nota);
		}
		
	}
	
	system("pause");
}



