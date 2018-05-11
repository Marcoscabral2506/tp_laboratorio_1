#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LIBRE 1
#define OCUPADO 0


int mostrar(EPersona personas[], int T)
{
    int i;
    int retorno=-1;

    if(T>0 && personas !=NULL)
    {
        retorno=0;

            for(i=0; i<T; i++)
            {
                if(personas[i].estado==1)
                {
                    mostrarPersona(personas[i]);
                }
            }
    }

    return retorno;

}
int buscarEspacioLibre(EPersona personas[], int T)
{
    int i;
    int retorno=-1;
    for(i=0; i<T; i++)
    {
       if(personas[i].estado==0)
       {
           return i;
       }
    }

    return retorno;
}
void mostrarPersona(EPersona personas)
{
    printf("\nNombre      Edad      DNI ");
    printf("\n%s            %d         %d", personas.nombre, personas.edad, personas.dni);

}

int darDeAlta(EPersona personas[], int T)
{
    int i;
    int retorno=-1;

    i=buscarEspacioLibre(personas, T);

    if(i>=0)
    {
        printf("Introduzca su nombre: ");
        fflush(stdin);
        gets(personas[i].nombre);

        printf("Ingrese su edad: ");
        scanf("%d", &personas[i].edad);

        printf("Ingrese su dni: ");
        scanf("%d", &personas[i].dni);

          personas[i].estado=1;

          retorno=0;
    printf("ingreso exitoso");
    }

    return retorno;

}
void listaDenombre(EPersona personas[], int T)
{
    int i;
    int j;
    EPersona aux;

    for(i = 0; i < T --; i++)
    {
        for(j = i ++; j < T; j++)
        {
            if(strcmp(personas[i].nombre, personas[j].nombre) < 0)
            {
                aux = personas[i];
                personas[i] = personas[j];
                personas[j] = aux;
            }
        }
    }
}

int darDeBaja(EPersona personas[], int T)
{
    int retorno=0;
    int dni;
    int buscarSiExiste;
    char respuesta;

    mostrar(personas, T);
    printf("\nIngrese el DNI que quiere dar de baja: ");
    scanf("%d", &dni);

    buscarSiExiste=buscarPorDni(personas, dni, T);

    if(!buscarSiExiste)
    {
        printf("\nel DNI no existe");
    }

    printf("Desea dar de baja?");
    respuesta=getche();
    if(respuesta=='s')
    {
        printf("\nSe dio de baja al usuario ");
        personas[buscarSiExiste].estado=0;

    }else{
        printf("\nCancelo la baja");
    }

   return retorno;


}
int buscarPorDni(EPersona personas[], int dni, int T)
{
    int i;
    int retorno=-1;
    for(i=0; i<T; i++)
    {

        if(personas[i].edad==1 && personas[i].dni==dni)
        {
            return i;
        }
    }

    return retorno;

}

void  mostrarlista(EPersona personas[], int T)
{
    int i;

for(i=0; i<T; i++)
{
        if(personas[i].estado == 1)
        {
            printf("\nNombre: %s D.N.I: %d Edad: %d\n", personas[i].nombre,  personas[i].dni,  personas[i].edad);
        }
}

}



