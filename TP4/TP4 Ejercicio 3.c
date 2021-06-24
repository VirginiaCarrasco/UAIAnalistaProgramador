#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 3
Fecha:5-6-2021
version:1

consigna:Ingresar valores hasta uno = 0, indicar e imprimir la cantidad de números ingresados y su
promedio

*/
int main(int argc, char *argv[]) {
 
 int valor;
 int cantidadValores=0;
 float sumaValores=0;
 float promedio=0;
 
 system("cls");	
 
printf("Ingrese un valor: ");
scanf("%d",&valor);

while(valor!=0){
	cantidadValores++;
	
	sumaValores=sumaValores+valor;
 	
	printf("Ingrese un valor: ");
	scanf("%d",&valor);
	
 }

promedio=sumaValores/cantidadValores;

printf("La cantidad de numeros ingresados es de %d. \n",cantidadValores);
printf("El promedio de los numeros ingresados es de %.2f .\n",promedio);

system("pause");
}

