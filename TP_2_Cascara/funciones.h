#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;



int mostrar(EPersona personas[], int T);
/** \brief valida
 *
 * \param personas[] EPersona le paso un tipo de dato persona
 * \param T int le paso tamaño
 * \return int devuelve un 0 si es null y mayor a la cantidad ollama a la funcion mostrarPersona
 *
 */

void mostrarPersona(EPersona personas);
/** \brief muestra la persona
 *
 * \param personas[] EPersona
 * \param T int recibe tamaño
 * \return int no devuelve nada porque es void
 *
 */

int buscarEspacioLibre(EPersona personas[], int T);
int darDeAlta(EPersona personas[], int T);

int darDeBaja(EPersona personas[], int T);
int buscarDNI(EPersona personas[], int dni, int T);

int ePersona_init(EPersona persona[], int limite);
int ePersona_validarMostrar(EPersona persona[], int limite);
int ePersona_mostrarPersona(EPersona persona[]);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */


#endif // FUNCIONES_H_INCLUDED
