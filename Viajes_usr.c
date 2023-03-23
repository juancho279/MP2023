#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estructuras.h"
#include "viajesfunc.h"


// Cabeceras de funciones usadas en este modulo
static void publicar();
int numeroviajes(char a[8]);

int Usuario_viajes(){
	
	char matricula[7]; 							//este valor sera cargado en memoria como puntero y hace referencia a la/s matricula/s correspondientes al usuario que haya iniciado sesion
	int N;
	
	
	int i;
	cargar_viajes();
	listar_viajes();
	
	
		
	
	printf("		-MENU VIAJES- \nSeleccione lo que desee hacer: \n\n		1.-Ver viajes disponibles.  \n		2.-Ver mis viajes.\n		3.-Publicar un viaje. ");
	listar_viajes();
	
	
	
	
	
	
	
	N = numeroviajes(matricula[8]);			//Esta funcion se usa para saber el numero de viajes que hay con esa matricula, dando por sentado que cada matricula es unica y corresponde a un unico coche
	
	
	
	
}



numeroviajes(char a[]){
	
	int i, aux;
	
	for(i=0; i<*Npep; i++){
		if ( strcmp((ptp+i)->id_mat , a)==0 ){
			aux++;
		}
	}
	return aux;
	
}
