#include "funcionescalculadora.h"

float obtenerNumero(char letra)
{
    float numero;
    printf("\nIngrese un numero %c\n",letra);
    scanf("%f",&numero);
    return numero;
}
float sumar(float numeroUno, float numeroDos)
{
    float a=numeroUno, b=numeroDos;

	return a+b;


}
float restar(float numeroUno, float numeroDos)
{
    float a=numeroUno, b=numeroDos;

	return a-b;

}
float validarDivision(float numeroUno, float numeroDos)
{
        if(numeroDos==0)
        {
            printf("\nNo se puede dividir por 0");
        }
    else{
        dividir(numeroUno,numeroDos);
    }
}
float dividir(float numeroUno, float numeroDos)
{
    {
       float resultado;
       float a=numeroUno, b=numeroDos;
       resultado= a/b;
       printf("\nEl resultado es %.2f\n", resultado);
    }
}

float multiplicar(float numeroUno, float numeroDos)
{
    float a=numeroUno, b=numeroDos;

	return a*b;

}
int validar(int numeroUno)
{
        if(numeroUno<0)
        {
            printf("\nErorr!!! dato no valido");
        }
    else{
    factorial(numeroUno);
    }
}


int factorial(int numeroUno)
{

    int a;

    int fac=1;

    for(a=2; a<=numeroUno;a=a+1)fac=fac*a;

    printf("\nEl resultado es %d",fac);
}

float todasJuntas(float numeroUno, float numeroDos)
{
    printf("\nLa suma es %.2f",sumar(numeroUno,numeroDos));
    printf("\nLa resta es %.2f",restar(numeroUno,numeroDos));
    validarDivision(numeroUno, numeroDos);
    printf("\nLa multiplicacion es %.2f",multiplicar(numeroUno,numeroDos));
    validar(numeroUno);

}
