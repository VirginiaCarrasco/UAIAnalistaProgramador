#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 3
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int valor1;
	int valor2;
	int producto;
	
	printf("Ingresar un valor: ");
	scanf("%d", &valor1);
	
	printf("Ingresar otro valor: ");
	scanf("%d", &valor2);
	
	
	if (valor1>valor2){
		producto=valor1*valor2;
		printf("El producto entre ambos valores es %d. \n",producto);
	}
	else{
		if(valor1==valor2){
			printf("Los valores ingresados son iguales.\n");
		}
	}
	system("pause");
}
