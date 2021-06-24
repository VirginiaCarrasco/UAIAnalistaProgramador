#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 1
Fecha:26-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	system("cls");
	
	int valor1=0;
	int valor2=0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &valor1);
	
	printf("Ingrese otro numero: ");
	scanf("%d", &valor2);
	
	if (valor1==valor2){
		printf("Los numeros ingresados son iguales.\n");
	}
system("pause");
}
