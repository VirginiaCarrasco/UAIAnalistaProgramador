#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 7
Fecha:5-6-2021
version:1

consigna:
Ingresar N temperaturas , indicar e imprimir la máxima y mínima

*/
int main(int argc, char *argv[]) {
 
 float temperatura;
 float maximaTemperatura=-999;
 float minimaTemperatura=999;
 
 
 system("cls");	

printf("Ingrese una temperatura: ");
scanf("%f",&temperatura);

while(temperatura!=999)	{
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










