#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 7
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	float valor1;
	float valor2;
	float valor3;
	float valor4;
	float suma1;
	float suma2;
	
	printf("Ingresar un valor: ");
	scanf("%f", &valor1);
	
	printf("Ingresar otro valor: ");
	scanf("%f", &valor2);
	
	printf("Ingresar un tercer valor: ");
	scanf("%f", &valor3);
	
	printf("Ingresar un cuarto valor: ");
	scanf("%f", &valor4);
	
	suma1=valor1+valor2;
	
	suma2=valor3+valor4;
	
	if (suma1>suma2){
		printf("La suma entre %.2f y %.2f es mayor que la suma entre %.2f y %.2f. \n",valor1,valor2,valor3,valor4);
	}
	else
	{ 
		if (suma2>suma1) {
			printf("La suma entre %.2f y %.2f es mayor que la suma entre %.2f y %.2f. \n",valor3,valor4,valor1,valor2);
		}
	}
	
	system("pause");
}

