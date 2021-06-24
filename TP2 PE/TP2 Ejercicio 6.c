#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 6
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	float valor1;
	float valor2;
	float valor3;
	float suma1;
	float suma2;
	float promedio;
	int contador=0;
	
	printf("Ingresar un valor: ");
	scanf("%f", &valor1);
	contador+=1;
	
	printf("Ingresar otro valor: ");
	scanf("%f", &valor2);
	contador+=1;
	
	printf("Ingresar un tercer valor: ");
	scanf("%f", &valor3);
	contador+=1;
	
	suma1=valor1+valor2;
	
	suma2=suma1+valor3;
	
	promedio=suma2/contador;
	
	if (valor1>promedio){
		printf("El valor %.2f es mayor que el promedio.\n",valor1);
	}
	if (valor2>promedio) {
		printf("El valor %.2f es mayor que el promedio.\n",valor2);
	}
	if (valor3>promedio) {
		printf("El valor %.2f es mayor que el promedio.\n",valor3);
	}
	system("pause");
}


