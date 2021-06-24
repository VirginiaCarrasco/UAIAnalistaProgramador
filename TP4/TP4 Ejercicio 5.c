#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 5
Fecha:5-6-2021
version:1

consigna:
Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de
ceros.

*/
int main(int argc, char *argv[]) {
 
 char finalizar='n';
 int valor;
 int cantidadPositivos=0;
 int cantidadNegativos=0;
 float sumaPositivos=0;
 float sumaNegativos=0;
 float promedioPositivos;
 float promedioNegativos;
 int cantidadCeros;
 
 
 system("cls");	


while(finalizar!='s'){
 	printf("Ingrese un valor: ");
	scanf("%d",&valor);
	
	if(valor>0 ){
	sumaPositivos=sumaPositivos+valor;
	cantidadPositivos++;
	}
	else if(valor<0){
			sumaNegativos=sumaNegativos+valor;
			cantidadNegativos++;
		}
		
	else{
		cantidadCeros++;
	}

	printf("Finalizar? Si desea finalizar ingrese s: ");
	scanf("%s", &finalizar);
	
}
promedioPositivos=sumaPositivos/cantidadPositivos;
promedioNegativos=sumaNegativos/cantidadNegativos;

printf("El promedio de los numeros positivos es de %.2f. \n",promedioPositivos);
printf("El promedio de los numeros negativos es de  %.2f.\n",promedioNegativos);
printf("La cantidad de ceros es de %d.\n",cantidadCeros);

system("pause");
}








