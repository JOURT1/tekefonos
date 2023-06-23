#include <stdio.h>
#include "funciones.h"

int ingreseCedula()
{
    int cedula;
    printf("Ingrese la cedula que desea buscar: \n");
    scanf("%d",&cedula);
    return cedula;
}

int obtenerPosicionContacto(int cedula[5],int cedulaBuscar)
{ 
    int lugar;
    for (int i = 0; i < 5; i++)
    {
        if (cedulaBuscar==cedula[i])
        {
           lugar = i;
        }

    }
    return lugar;
}

void imprimirContactos(char nombre[5][50],int telefonos[10][2],int indice)
{

    printf("El nombre es: %s\n",nombre[indice]);

    for (int i = 0; i < 10; i++)
    {
        if (indice==telefonos[i][0])
        {
            printf("Numero de telefono: %d\n",telefonos[i][1]);
        }
    }
}

void imprimirDirecciones(char direcciones[10][2][50],int indice)
{

    for (int i = 0; i < 10; i++)
    {
        if (direcciones[i][0][0] - '0' ==indice)
        {
            printf("El lugar es: %s\n",direcciones[i][1]);
        }
    }
}