#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 3 Ejercicio 6
Fecha:11-5-2021
version:1

consigna:Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos
superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan
los $40
*/
int main(int argc, char *argv[]) {

	int i;
	char patente[3];
	int montoMulta;
	int contadorMultasMas40=0;
	int contadorMultas=0;
	float porcentajeMultasMas40;
	
	system("cls");
	
	for(i=1;i<=50;i++)
	{
		printf("Ingrese las 3 letras de la patente del auto %d.: ",i);
		scanf("%s", &patente);
		
		printf("Ingrese el monto de la multa del auto de patente %s:",patente);
		scanf("%d",&montoMulta);
		
		contadorMultas++;
		
		if(montoMulta>40){
			contadorMultasMas40++;
		}
		
	}
	porcentajeMultasMas40=contadorMultasMas40*100/contadorMultas;
	
	printf("El total de multas que superan los $40 es de %d.\n",contadorMultasMas40);
	printf("De un total de %d multas cobradas, el %.2f %% pertenece a multas mayores a $40.\n",contadorMultas,porcentajeMultasMas40);
	
	system("pause");
}
