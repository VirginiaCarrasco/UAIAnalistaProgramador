#include <stdio.h>
#include <stdlib.h>
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 4 Ejercicio 6
Fecha:5-6-2021
version:1

consigna:
Ingresar los datos de facturación de una empresa. Se conoce Número de factura, Número
de artículo, Cantidad vendida y Precio unitario Los datos finalizan con numero de factura =
0, cada factura sólo tiene un número de artículo, y existen sólo tres artículos.

*/
int main(int argc, char *argv[]) {
 
 int nroFactura;
 int nroArticulo;
 int cantidadVendidaArt1=0;
 int cantidadVendidaArt2=0;
 int cantidadVendidaArt3=0;
 int precioUnitarioArt1=100;
 int precioUnitarioArt2=200;
 int precioUnitarioArt3=300;
 int totalArt1=0;
 int totalArt2=0;
 int totalArt3=0;
 int totalArticulos=0;
 
 system("cls");	

printf("Ingrese el numero de factura: ");
scanf("%d",&nroFactura);
	
while(nroFactura!=0){
	printf("Ingrese el numero del articulo: ");
	scanf("%d",&nroArticulo);
	
	switch(nroArticulo)
	{
		case 1:
			cantidadVendidaArt1++;
			totalArt1=totalArt1+precioUnitarioArt1;
			totalArticulos++;
			break;
		case 2:
			cantidadVendidaArt2++;
			totalArt2=totalArt2+precioUnitarioArt2;
			totalArticulos++;
			break;
		case 3:
			cantidadVendidaArt3++;
			totalArt3=totalArt3+precioUnitarioArt3;
			totalArticulos++;
			break;
		default:
			printf("El nro de articulo ingresado no existe.\n");
			break;
	}
	printf("Ingrese el numero de factura: ");
	scanf("%d",&nroFactura);
	
}

printf("El total de dinero acumulado por la venta de articulos nro 1  es de %d. \n",totalArt1);
printf("El total de dinero acumulado por la venta de articulos nro 2  es de %d. \n",totalArt2);
printf("El total de dinero acumulado por la venta de articulos nro 3  es de %d. \n",totalArt3);
printf("El total de articulos vendidos es de %d. \n", totalArticulos);


system("pause");
}









