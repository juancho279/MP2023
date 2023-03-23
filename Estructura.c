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
    char contraseña[8];
};
struct perfiles *pty;

struct vehiculos
{
    int vehiculo;
    char id_mat[7];
    char Id_usuario[4];
    int num_plazas[1];
    char Desc_veh[50];
    ]
    struct vehiculos *ptt;

    struct viajes
    {
        int viaje
        int id_viaje[6];
        char id_mat[7];
        char F_inic[];
        char h_inic[];
        char h_fin[];
        int plazas libres[1];
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
