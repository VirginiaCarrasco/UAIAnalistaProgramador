#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 8
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int edad1;
	float altura1;
	int edad2;
	float altura2;
	
	printf("Ingresar la edad de una persona: ");
	scanf("%d", &edad1);
	
	printf("Ingresar la altura de esa persona en metros: ");
	scanf("%f", &altura1);
	
	printf("Ingresar la edad de una segunda persona: ");
	scanf("%d", &edad2);
	
	printf("Ingresar la altura de esta segunda persona en metros: ");
	scanf("%f", &altura2);
	
	if (edad1>edad2){
		printf("La altura de la primera persona es de %.2f \n",altura1);
	}
	else
	{ 
		if (edad2>edad1) {
			printf("La altura de la segunda persona es de %.2f. \n",altura2);
		}
	}
	
	system("pause");
}


