#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 1 Ejercicio 2
Fecha:19-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	int valor1=0;
	int valor2=0;
	int valor3=0;
	int suma1=0;
	int suma2=0;
	
	printf("Ingrese un numero: ");
	scanf("%d",&valor1);
	
	printf("Ingrese un segundo numero: ");
	scanf("%d",&valor2);
	
	printf("Ingrese un tercer numero: ");
	scanf("%d",&valor3);
	
	suma1=valor1+valor2;
	
	suma2=suma1+valor3;
	
	printf("El suma de los tres numeros es %d",suma2);
	
}
