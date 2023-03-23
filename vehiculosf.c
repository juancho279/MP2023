#include <stdio.h>
#include <stdlib.h>
#include "Estructuras.h"
#include <string.h>
#include "vehiculosf.h"


void cargarvehiculos( int *id_usu){
	
	

	
	int Numero_vehiculos_total=0;
	FILE *files;

	files = fopen("vehiculos.txt","r");                        		// Se abre el fichero en modo lectura

    if(files==NULL)  												// Si no se pudiera abrir, daria el siguiente error. Retornando al menu principal.
	{
		printf("NO SE HA PODIDO ABRIR EL ARCHIVO");
		main();
	}
	
	char linea [200];

	int n = 20;																		//Numero que he puesto como ejemplo para la hora de reservar memoria
    int Indice_Struct_vehiculos = 0;
    int contador_campos = 0;
    Nveh= &Numero_vehiculos_total;
    
    
    ptt = (struct vehiculos*) malloc(n * sizeof(struct vehiculos)); 				 // Reservamos memoria necesaria para X viajes de Y usuarios (hemos puesto 20 por poner un ejemplo)

	while (fgets(linea, 200, files) != NULL)
	{
		char * token = strtok(linea, "-");

		if (token != NULL){
			while(token != NULL){

				switch(contador_campos)											//Switch despues de cada interrupción por el token "-", se guarda la informacion contenida en el fichero
																				//En el campo respectivo de la estructura Vehiculos, determinado por el contador de campo que se incrementa una vez por ciclo
				{
					case 0:																			
   						strcpy((ptt+Indice_Struct_vehiculos)->id_mat,token);
						break;
					case 1:
						(ptt+Indice_Struct_vehiculos)->Id_usuario = atoi(token);
						break;
					case 2:
					    (ptt+Indice_Struct_vehiculos)->num_plazas = atoi(token) ;
						break;
					case 3:
					    strcpy((ptt+Indice_Struct_vehiculos)->Desc_veh,token);
						break;
				}
				
				contador_campos++;
				token = strtok(NULL, "-");
			}
		}

		Indice_Struct_vehiculos++;
		*Nveh=*Nveh+1;
		contador_campos = 0;
	}

	
}



void matriculasdeX(int *id_usu){
	
	int i,aux;
	aux=0;
	
	for (i=0; i<*Nveh && aux<10; i++){								//aux<10 pues 10 es el supuesto numero maximo de coches registrados por usuario
		if ( *id_usu == (ptt+i)->Id_usuario ){
			
			strcpy((ptt+i)->id_mat,*(Vehiculos_Prop+aux));
			aux++;
		}
	}
	
	
}
