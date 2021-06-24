#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 4
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int valor1;
	int valor2;
	int resta1;
	int resta2;
	
	printf("Ingresar un valor: ");
	scanf("%d", &valor1);
	
	printf("Ingresar otro valor: ");
	scanf("%d", &valor2);
	
	
	if (valor1>valor2){
		resta1=valor1-valor2;
		printf("El resultado de %d menos %d es de %d. \n",valor1,valor2,resta1);
	}
	else{
		if(valor2>valor1){
			resta2=valor2-valor1;
			printf("El resultado de %d menos %d es de %d. \n",valor2,valor1,resta2);
		}
	}
	system("pause");
}
