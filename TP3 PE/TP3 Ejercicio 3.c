#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 3 Ejercicio 3
Fecha:11-5-2021
version:1

consigna:Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos
ceros.
*/
int main(int argc, char *argv[]) {

	int i;
	int valor;
	int totalPositivos=0;
	int totalNegativos=0;
	int totalCeros=0;
	
	system("cls");
	
	for(i=1;i<=10;i++)
	{
		printf("Ingrese el valor %d ",i);
		scanf("%d", &valor);
	
		if(valor<0)
		{
			totalNegativos++;
		}
		else {
			if(valor>0){
				totalPositivos++;
			}
			else{
				totalCeros++;
			}
		}
		
	}
	
	printf("El total de valores positivos ingresados es de %d.\n El total de valores negativos ingresados es de %d.\n El total de ceros ingresados es de %d. \n",totalPositivos,totalNegativos, totalCeros);
	
	system("pause");
}

