#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


float obtenerNumero(char);
/** \brief Pedimos al usuario ingresar un numero
 *
 * \param char le indicamos que valor va reemplazar el numero ingresado
 * \return float devolvemos el numero ingresado
 *
 */


float sumar(float, float);
/** \brief Sumamos dos numeros ingresados anteriormente
 *
 * \param  toma el primer numero ingresado
 * \param  toma el segundo numero ingresado
 * \return  retorna el resultado de la suma de ambos numeros ingresados
 *
 */


float restar(float, float);
/** \brief Restamos los dos numeros ingresados anteriormente
 *
 * \param  toma el primer numero ingresado
 * \param  toma el segundo numero ingresado
 * \return  retorna el resultado de la resta de ambos numeros ingresados
 *
 */


float dividir(float, float);
/** \brief dividimos los dos numeros ingresados anteriormente
 *
 * \param  toma el primer numero ingresado
 * \param   toma el segundo numero ingresado
 * \return  retorna el resultado de la division de ambos numeros ingresados
 *
 */
float validarDivision(float numeroUno, float numeroDos);



float multiplicar(float, float);
/** \brief multiplicamos los dos numeros ingresados anteriormente
 *
 * \param  toma el primer numero ingresado
 * \param  toma el segundo numero ingresado
 * \return  retorna el resultado de la multiplicacion de ambos numeros ingresados
 *
 */


int factorial(int);
/** \brief calculamos el factorial del primer numero ingresado
 *
 * \param toma el primer numero ingresado
 * \return t devuelve el factorial
 *
 */

int validar(int numeroUno);
/** \brief valida nuestro factorial, si es negativo o 0(cero)
 * \param toma el primer numero ingresado y lo valida
 * \return devuelve y llama a la funcion factorial
 *
 */
float todasJuntas(float numeroUno, float numeroDos);
/** \brief calcula todas las funciones juntas
 *
 * \param  toma el primer numero ingresado
 * \param  toma el segundo numero ingresado
 * \return  retorna el resultado de todas las cuentas
 *
 */

#endif


