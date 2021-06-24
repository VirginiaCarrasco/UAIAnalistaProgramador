#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 3 Ejercicio 4
Fecha:11-5-2021
version:1

consigna:Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el
promedio de lo valores pares y el promedio de los valores impares. Luego mostrar por
pantalla cuantos números superaron el valor 15.
*/
int main(int argc, char *argv[]) {

	int i;
	int valor;
	float promedioGeneral;
	float promedioPares;
	float promedioImpares;
	int contadorGeneral=0;
	int contadorPares=0;
	int contadorImpares=0;
	float sumaGeneral=0;
	float sumaPares=0;
	float sumaImpares=0;
	int contadorMayores15=0;
	
	
	system("cls");
	
	for(i=1;i<=8;i++)
	{
		printf("Ingrese el valor %d ",i);
		scanf("%d", &valor);
		sumaGeneral=sumaGeneral+valor;
		contadorGeneral++;
		
		if(valor%2==0){
			sumaPares=sumaPares+valor;
			contadorPares++;
		}
		else{
			sumaImpares=sumaImpares+valor;
			contadorImpares++;
		}
	}
	promedioGeneral=sumaGeneral/contadorGeneral;
	promedioPares=sumaPares/contadorPares;
	promedioImpares=sumaImpares/contadorImpares;
	
	printf("El promedio general es %.2f.\n El promedio de pares es %.2f.\n El promedio de impares es %.2f.\n",promedioGeneral, promedioPares,promedioImpares);
	
	if(promedioGeneral>15){
		contadorMayores15++;
	}
	if(promedioPares>15){
		contadorMayores15++;
	}
	if(promedioImpares>15){
		contadorMayores15++;
	}
	printf("Los promedios mayores a 15 son %d. \n",contadorMayores15);
	
	system("pause");
}
