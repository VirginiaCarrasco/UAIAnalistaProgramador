#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 4
Fecha:5-6-2021
version:1

consigna:
Ingresar nombres y notas de alumnos teniendo en cuenta que la carga finaliza con nota =
11, calcular e imprimir el promedio, los aprobados y cuántos estan entre 4 y 6.

*/
int main(int argc, char *argv[]) {
 
 char alumno[10];
 int nota;
 float sumaNotas=0;
 int cantidadAlumnos=0;
 float promedio=0;
 int cantidadAprobados=0;
 int alumnosEntre4y6=0;
 
 system("cls");	
 

do{
	printf("Ingrese el nombre de un alumno: ");
	scanf("%s",&alumno);
	
	printf("Ingrese la nota del alumno: ");
	scanf("%d",&nota);
	
	if(nota>0 && nota<11){
	sumaNotas=sumaNotas+nota;
	cantidadAlumnos++;
	}
	
	if(nota>6 && nota<11){
		cantidadAprobados++;
	}
	
	if(nota>=4 && nota<=6){
		alumnosEntre4y6++;
	}

} while(nota!=11);

promedio=sumaNotas/cantidadAlumnos;

printf("La cantidad de alumnos aprobados es de %d alumnos. \n",cantidadAprobados);
printf("El promedio de las notas de los alumnos es de %.2f.\n",promedio);
printf("La cantidad de alumnos que estan entre 4 y 6 es de %d.\n",alumnosEntre4y6);

system("pause");
}






