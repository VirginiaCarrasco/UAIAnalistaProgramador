#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 2
Fecha:5-6-2021
version:1

consigna:Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan
los $1000.imprimir los resultados
	a. Sobre el ejercicio anterior indicar cuántas superan los $ 10000.-imprimir el
resultado
	b. Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700
inclusive.imprimir el resultado
*/
int main(int argc, char *argv[]) {
 
 int nroFactura;
 int importeFactura;
 int sumaFacturas=0;
 int sumaFacturasMayores1000=0;
 int cantidadFacturasMayores1000=0;
 
 system("cls");	
 
printf("Ingrese el nro de la factura: ");
scanf("%d",&nroFactura);

while(nroFactura!=0){
	printf("Ingrese el importe de la factura:  ");
	scanf("%d",&importeFactura);
	
 	sumaFacturas=sumaFacturas+importeFactura;
 	
 	if(importeFactura>1000){
 		sumaFacturasMayores1000=sumaFacturasMayores1000+importeFactura;
 		cantidadFacturasMayores1000++;
	 }
 	
	printf("Ingrese el nro de la factura: ");
	scanf("%d",&nroFactura);
	
 }

printf("La suma de las facturas ingresadas es de $ %d. \n",sumaFacturas);
printf("La suma de las facturas que superan los $1000 es de $ %d.\n",sumaFacturasMayores1000);
printf("La cantidad de facturas que superan los $1000 es de %d. \n",cantidadFacturasMayores1000);
    
system("pause");
}
