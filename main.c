#include <stdio.h>
#include <stdlib.h>
#include "funcionescalculadora.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float a;
    float b;
    int bandera1=0;
    int bandera2=0;
    int numeroFactorial;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (%1.f+%1.f)\n",a,b);
        printf("4- Calcular la resta (%1.f-%1.f)\n",a,b);
        printf("5- Calcular la division (%1.f/%1.f)\n",a,b);
        printf("6- Calcular la multiplicacion (%1.f*%1.f)\n",a,b);
        printf("7- Calcular el factorial (%1.f!)\n",a,b);
        printf("8- Calcular todas las operaciones\n",a,b);
        printf("9- Salir\n");

        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:

                 a=obtenerNumero('a');

                 bandera1=1;

                 printf("\nSu primer numero es %.2f\n", a);

                 break;

            case 2:

                 b=obtenerNumero('b');

                 bandera2=1;

                 printf("\nSu segundo numero es %.2f\n", b);

                 break;

            case 3:

                 printf("El resultado es %.2f\n", sumar(a,b));

                break;

            case 4:

                 printf("El resultado es %.2f\n", restar(a,b));

                break;

            case 5:

                validarDivision(a,b);

                break;

            case 6:

                 printf("El resultado es %.2f\n", multiplicar(a,b));

                break;

            case 7:

                  validar(a);


                break;

            case 8:

                  todasJuntas(a,b);

                break;

            case 9:

                seguir = 'n';
                break;

            default:
                printf("\nIngrese una opcion del 1 al 9!!!\n");
                break;
        }


}
    return 0;
}
