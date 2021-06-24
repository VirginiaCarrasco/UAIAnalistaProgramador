#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 5
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int lado1;
	int lado2;
	int lado3;
	
	printf("Ingresar un lado de un triangulo: ");
	scanf("%d", &lado1);
	
	printf("Ingresar otro lado del triangulo: ");
	scanf("%d", &lado2);
	
	printf("Ingresar el tercer lado del triangulo: ");
	scanf("%d", &lado3);
	
	if (lado1==lado2 && lado2==lado3){
		printf("El triangulo es equilatero.\n");
	}
	else{
		if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3) {
			printf("El triangulo es escaleno.\n");
		}
		else
		{
			printf("El triangulo es isosceles.\n");
		}
	}
	system("pause");
}

