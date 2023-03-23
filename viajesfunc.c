#include <stdio.h>
#include "Estructuras.h"
#include <stdlib.h>
#include <string.h>
#include "viajesfunc.h"




void cargar_viajes(){
	
	int Numero_viajes=0;
	FILE *files;

	files = fopen("viajes.txt","r");                        		// Se abre el fichero en modo 'r'.

    if(files==NULL)  												// Si no se pudiera abrir, daria el siguiente error. Retornando al menu principal.
	{
		printf("NO SE HA PODIDO ABRIR EL ARCHIVO");
	}
	
	char linea [200];

	int n = 20;
    int Indice_Actual_Viaje = 0;
    int contador_campos = 0;
    Npep= &Numero_viajes;
    
    
    ptp = (struct viajes*) malloc(n * sizeof(struct viajes)); 				 // Reservamos memoria necesaria para X viajes de Y usuarios (hemos puesto 20 por poner un ejemplo)

	while (fgets(linea, 200, files) != NULL)
	{
		char * token = strtok(linea, "-");

		if (token != NULL){
			while(token != NULL){

				switch(contador_campos)											//Switch despues de cada interrupción por el token "-", se guarda la informacion contenida en el fichero
																				//En el campo respectivo de la estructura Viajes
				{
					case 0:
						(ptp+Indice_Actual_Viaje)->id_viaje = atoi(token);
						break;
					case 1:
   						strcpy((ptp+Indice_Actual_Viaje)->id_mat,token);
						break;
					case 2:
					    strcpy((ptp+Indice_Actual_Viaje)->F_inic,token);
						break;
					case 3:
					    strcpy((ptp+Indice_Actual_Viaje)->h_inic,token);
						break;
					case 4:
					    strcpy((ptp+Indice_Actual_Viaje)->h_fin,token);
						break;
					case 5:
					    (ptp+Indice_Actual_Viaje)->plazas_libres = atoi(token) ;
						break;
					case 6:
					    strcpy((ptp+Indice_Actual_Viaje)->via_ru,token);
						break;
					case 7:
					    (ptp+Indice_Actual_Viaje)->importe_viaje = atoi(token) ;
						break;
					case 8:
					    strcpy((ptp+Indice_Actual_Viaje)->estado,token);
						break;
				}
				
				contador_campos++;
				token = strtok(NULL, "-");
			}
		}

		Indice_Actual_Viaje++;
		*Npep=*Npep+1;
		contador_campos = 0;
	}
}

void listar_viajes(){





};
