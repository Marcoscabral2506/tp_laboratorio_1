#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 20

int main()
{
    EPersona persona[T];
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                darDeAlta(persona, T);

                break;
            case 2:
                darDeBaja(persona, T);
                break;
            case 3:
                    mostrarlista(persona, T);
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
