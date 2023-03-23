#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct perfiles
	{
    int id_usuario[4];
    char nom_usuario[20];
    char localidad[20];
    char perfil_usuario[13];
    char usuario[5];
    char password[8];
	};

struct perfiles *pty;

struct vehiculos
	{
    char id_mat[7];
    int Id_usuario;
    int num_plazas;
    char Desc_veh[50];
    
	};
	
struct vehiculos *ptt;

    struct viajes
    {
        int id_viaje;
        char id_mat[7];
        char F_inic[10];
        char h_inic[5];
        char h_fin[5];
        int plazas_libres;
        char via_ru[6];
        int importe_viaje;
        char estado[10];

    };
    
    struct viajes *ptp;

    struct pasos
    {
        int ruta;
        int id_viaje[6];
        char poblacion[20];
    };
    
    struct pasos *ptj
