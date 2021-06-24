#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 1
Fecha:5-6-2021
version:1

consigna:Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados
*/
int main(int argc, char *argv[]) {
 
 int sueldo;
 int sumaSueldos=0;
 int cantidadSueldos=0;
 float promedio;
 
 system("cls");	
 
printf("Ingrese el primer sueldo: ");
scanf("%d",&sueldo);

while(sueldo!=0){
 	sumaSueldos=sumaSueldos+sueldo;
 	cantidadSueldos++;
 	
	printf("Ingrese otro sueldo:");
	scanf("%d",&sueldo);	
	
 }

promedio=sumaSueldos/cantidadSueldos;

printf("La suma de los sueldos ingresados es de %d. \n",sumaSueldos);
printf("El promedio de los sueldos ingresados es de %.2f.\n",promedio);

system("pause");
}
