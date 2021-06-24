#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 1 Ejercicio 1
Fecha:19-4-2021
version:1
*/
int main(int argc, char *argv[]) {
	
	
	 int valor1=0;
	 int valor2=0;
	 int sumaEnteros=0;
	 
	 /*Solicita un numero entero al usuario*/
	 printf("Ingrese un numero entero ");
	 scanf("%d",&valor1);
	 
	 /*Solicita otro numero entero al usuario*/
	 printf("Ingrese otro numero entero ");
	 scanf("%d",&valor2);
	 
	 /*suma ambos numeros dados por el usuario*/
	 sumaEnteros= valor1+valor2;
	 
	 /*imprime el resultado de la suma*/
	 printf("La suma de ambos numeros es %d ",sumaEnteros);
	 

}
