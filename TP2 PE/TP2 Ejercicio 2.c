#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 2
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int valor1;
	
	printf("Ingresar un valor: ");
	scanf("%d", &valor1);
	
	if (valor1>0){
		printf("El valor ingresado es positivo.");
	}
	else{
		if (valor1==0) {
			printf("El valor ingresado es 0.");
		}
		else
		{
			printf("El valor ingresado es negativo.");
		}
	}
	system("pause");
}
