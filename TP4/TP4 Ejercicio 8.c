#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 8
Fecha:5-6-2021
version:1

consigna:
Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y
menor

*/
int main(int argc, char *argv[]) {
 
 float temperatura;
 float maximaTemperatura=-9999;
 float minimaTemperatura=9999;
 
 
 system("cls");	

printf("Ingrese una temperatura: ");
scanf("%f",&temperatura);

while(temperatura!=1000)	{
	if(temperatura>maximaTemperatura){
		maximaTemperatura=temperatura;
	}
	if(temperatura<minimaTemperatura){
		minimaTemperatura=temperatura;
	}
	printf("Ingrese una temperatura: ");
	scanf("%f",&temperatura);
}

printf("La temperatura maxima fue de %.2f. \n",maximaTemperatura);
printf("La temperatura minima fue de %.2f. \n",minimaTemperatura);

system("pause");
}











