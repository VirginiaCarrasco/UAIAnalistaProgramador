#include <stdio.h>
#include <stdlib.h>

/* 
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 1 Ejercicio 3
Fecha:19-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	int valor1=0;
	int valor2=0;
	int valor3=0;
	int suma=0;
	
	printf("Ingrese un primer numero: ");
	scanf("%d", &valor1);
	
	printf("Ingrese un segundo numero: ");
	scanf("%d", &valor2);
	
	printf("Ingrese un tercer numero: ");
	scanf("%d", &valor3);
	
	suma=valor1+valor2+valor3;
	
	printf("La suma de esos tres valores da %d",suma);
	
}
