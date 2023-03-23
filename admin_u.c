#include <stdio.h>

void admin_u();
void admin_veh();
void admin_via();

int main()
{
    int n;
    printf("1.- Usuario \n2.- Vehiculos \n3.- Viajes \n");
    printf("Seleccione lo que desea hacer:  ");
    scanf("%i",&n);
    switch(n)
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;


}

admin_u()
{
    int n;
    printf("1.- Dar de alta o baja usuarios \n2.- Modificar usuarios \n3.- listar usuarios \n4.- Salir\n");
    printf("Seleccione lo que desea hacer:  ");
    scanf("%i",&n1);
    switch(n1)
    case 1:
    void AgregarUsuario(int x)
{
	char cadena_nom[20];
	char cadena_usuario[5];
	int  cadena_usuario_id[4];
	char cadena_con[8];
	char cadena_pobl[20];
    printf("1.- Dar de alta\n2.- Dar de baja\n");
    printf("Seleccione lo que desea hacer:  ");
       scanf("%i",&n2);
       switch(n2)
       case 1:
	   cargarUsuariostxt();
	    printf("Seleccione 1 para añadir admin y cualquier otra tecla para usuario")
	    scanf("%d",&n3)
        if(n3==1)
        {
                    strcpy((pty+*N_us)->perfil,"admin");

        }
        else
        {
            strcpy((pty+*N_us)->perfil,"usuario")
        }

        printf("\nIntroduzca el nombre completo:");
        fgets(cadena_nom,20,stdin);
        Salto_linea(cadena_nom);
        fflush(stdin);

        printf("\nIntroduzca el nombre de usuario:");
        fgets(cadena_usuario,5,stdin);
        Salto_linea(cadena_usuario);
        fflush(stdin);

        printf("\nIntroduzca contraseña:");
        fgets(cadena_nom,8,stdin);
        alto_linea(cadena_con);
        fflush(stdin);

        printf("\nIntroduzca la poblacion:");
        fgets(cadena_nom,20,stdin);
        Salto_linea(cadena_pobl);
        fflush(stdin);

        strcpy((pty+*N_us)->nom_usuario,cadena_nom);
        strcpy((pty+*N_us)->localidad,cadena_pobl);
        strcpy((pty+*N_us)->usuario,cadena_usuario);
        strcpy((pty+*N_us)->contraseña,cadena_con);
            break;

        case 2:
            break;







        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
}





