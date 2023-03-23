#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <admin.h>
int encontrar_usuario (usuario*, char*, char*, int*);
int posicion (usuario*, char*, char*, int*);
void registro (usuario*, int*);
int main()
{

Usuarios *Vectorusuarios;
char usuario [6];
char login [9];
int encontrado;
int pos;
char sino [2];
char salir1, salir2;

vectorUsuarios (    """"           &num_Usuarios);



puts("Nombre de usuario:"\n);
fflush(stdin);
fgets(usuario,6,stdin);
puts ("Contrasena"\n);
fflush(stdin);
fgets(login,9,stdin);
encontrado= buscar_usuario (vectorUsuarios, usuario, login, &num_Usuarios);
pos= posicion (vectorUsuarios, usuario, login, &num_Usuarios);
if (encontrado==1){
    printf("Se ha encontrado el usuario\n");
    system ("PAUSE");
    system("cls");


}
if (encontrado==2){
    printf ("Este usuario no se ha encontrado\n");
    printf("¿Desea registrarse?\n");
    fflush(stdin);
    scanf ("%s",sino);

    if ((strcmp(sino,"si\n")==0)|| (strcmp(sino,"Si")==0)){
        registrar (vectorUsuarios, &num_Usuarios)
    }
    else{
       do{
        printf("¿Desea salir? [si/no]\n");
        fflush(stdin);
        scanf("%c",salir1);
        switch (salir1){
        case 'no': break;
        case 'No': break;
        case 'si': salir2 = 'si';
        break;
        case 'Si': salir2 = 'si';
        break;
        default:printf("Se ha producido un error, introduce otra opcion\n");
        break;
        }
        }while(salir1 != 'no' && salir1 != 'No' && salir1 != 'si' && salir1 != 'Si');
         while(salir2 == 'no' || salir2 == 'No');
       }


    }



return 0;
}
int buscar_usuario() {
int encontrado, i;
for (i=0; i<*N_us; i++){
    if ((strcmp(v_us[i].usuario)==0)&& (strcmp (v_us[i].contrasena)==0)){
        encontrado = 1;
        if (stcrmp((v_us+i)->perfil_usuario,"administrador")==0){
            admin();
            else{
                usuario();
            }
        }
        break;
    }
        else{

            encontrado = 2;

        }


    }
    return encontrado;


}









}
