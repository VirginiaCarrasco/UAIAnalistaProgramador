#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 3 Ejercicio 5
Fecha:11-5-2021
version:1

consigna:Ingresar 30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre
20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cada grupo en el total.
*/
int main(int argc, char *argv[]) {

	int i;
	int valor;
	int contador1a10=0;
	int contador10a20=0;
	int contador20a30=0;
	int contadorMayores30=0;
	float contadorTotal=0;
	float porcentaje1a10;
	float porcentaje10a20;
	float porcentaje20a30;
	float porcentajeMayores30;
	
	
	system("cls");
	
	for(i=1;i<=30;i++)
	{
		printf("Ingrese el valor %d ",i);
		scanf("%d", &valor);
		contadorTotal++;
		
		if(valor>0&&valor<=10){
			contador1a10++;
		}
		if(valor>=10 &&valor<=20){
			contador10a20++;
		}
		if(valor>=20 && valor<=30){
			contador20a30++;
		}
		if(valor>30){
			contadorMayores30++;
		}
	}
	porcentaje1a10=contador1a10*100/contadorTotal;
	porcentaje10a20=contador10a20*100/contadorTotal;
	porcentaje20a30=contador20a30*100/contadorTotal;
	porcentajeMayores30=contadorMayores30*100/contadorTotal;
	
	printf("El porcentaje de numeros ingresados que estan entre 1 y 10 es de %.2f.\n",porcentaje1a10);
	printf("El porcentaje de numeros ingresados que estan entre 10 y 20 es de %.2f.\n",porcentaje10a20);
	printf("El porcentaje de numeros ingresados que estan entre 20 y 30 es de %.2f.\n",porcentaje20a30);
	printf("El porcentaje de numeros ingresados mayores a 30 es de %.2f.\n",porcentajeMayores30);
	
	system("pause");
}
