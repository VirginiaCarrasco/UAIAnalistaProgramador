#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Alumna:Carrasco, Virginia Sofia
Ejercicio:TP 2 Ejercicio 10
Fecha:26-5-2021
version:1
*/
int main(int argc, char *argv[]) {

	system("cls");
	
	int dia;
	int mes;
	int anio;
	int bisiesto;
	
	
	printf("Ingresar un dia: ");
	scanf("%d", &dia);
	
	printf("Ingresar un mes: ");
	scanf("%d", &mes);
	
	printf("Ingresar un anio: ");
	scanf("%d", &anio);
	
	if (mes>0 && mes<13){
	 	switch(mes)
	 		{
	 		case 1:
	 		case 3:
	 		case 5:
	 		case 7:
	 		case 8:
	 		case 10:
	 		case 12:
	 			if(dia>0 && dia<32){
	 				printf("La fecha ingresada es valida.\n");
			}
			break;
			case 2: 
				if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 ){
				
                     if ( dia > 0 && dia <= 29 ){
					 
                              printf( "La fecha ingresada es valida.\n" );
            	
						}
                	else{
				
                    	if ( dia >0 && dia <= 28 ){
                              printf( "La fecha ingresada es valida. \n" );
                    	}
               		 }
        		}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(dia>0 && dia<31){
	 				printf("La fecha ingresada es valida.\n");
				 }
			break;
			default: printf("El mes ingresado no es valido.\n");
			 }
	}
	
	system("pause");
}


