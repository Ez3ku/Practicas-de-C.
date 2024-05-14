#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numerosrandom();
void NumerosMaxMin(int num1, int num2, int num3);
int suma_entre_numeros(int N);
void tablaMultiplicar(int num);
float sum(float num5, float num15);
void substract(float *num5, float num15);
float multiply(float num5, float num15);
float divide(float num5, float num15);
void cambiar_signo(int *numero);
void ingresar_numeros(int *num7, int *num17);


int main ()
{
///1
    int numerorand = numerosrandom();
    printf("\n1 funcion generar un numero aleatorio del 0 al 100: %d \n",numerorand);


///2
    printf("\n2 funcion que recibe 3 numeros y devuelve el mayor y menor:\n");
    int num1 = 10, num2 = 20, num3 = 5;
    NumerosMaxMin (num1, num2, num3);
    printf("\n");

///3
    {
        printf("\n3 funcion que suma todos los numeros menores a n: \n");
        int N;
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &N);
        int resultado = suma_entre_numeros(N);
        printf("La suma de los numeros enteros positivos menores que %d es %d\n", N, resultado);

    }
///4
    {
        printf("\n4 funcion que muestra la tabla de multiplicacion hasta 10 de el numero ingresado: \n");
        int num;
        printf("ingrese un numero entero: ");
        scanf("%d", &num);
        tablaMultiplicar(num);

    }
///5
    float num5, num15;
    char operador;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num5);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num15);

    float resultado;
    switch(operador)
    {
    case '+':
        resultado = sum(num5, num15);
        break;
    case '-':
        restah(&num5, num15);
        resultado = num5;
        break;
    case '*':



///6
    {
        printf("\n6 funcion que cambiar el signo de un numero a negativo: \n");
        int numero = 10;
        printf("El numero original es: %d\n", numero);
        cambiar_signo(&numero);
        printf("el numero cambiado de signo es: %d\n", numero);
        return 0;
    }
///7
    {
        printf("funcion que reciba 2 numeros que cargue el usuario a la funcion:");
        int num7, num17;
        ingresar_numeros(&num7, &num17);
        printf("Los números ingresados son: %d y %d \n", num7, num17);
        return 0;
    }

////////////////////////////////////////////////////////////////////////



///1
    int numerosrandom()
    {
        srand(time(NULL));
        int numerorand = rand() % 101;
        return numerorand;
    }

///2

    void NumerosMaxMin(int num1, int num2, int num3)
    {
        int min, max;
        min = num1;
        max = num1;
        if (num2 < min)
        {
            min = num2;
        }
        if (num2 > max)
        {
            max = num2;
        }
        if (num3 < min)
        {
            min = num3;
        }
        if (num3 > max)
        {
            max = num3;
        }
        printf("El numero mayor es: %d\n", max);
        printf("El numero menor es: %d\n", min);
    }
///3
    int suma_entre_numeros(int N)
    {
        int suma = 0;
        for (int i = 1; i < N; i++)
        {
            suma += i;
        }
        return suma;
    }
float divide(float num1, float num2);
///4
int num=0;

    void tablaMultiplicar(int num);
    {
        int i;
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }

///5

    float sum(float num5, float num15)
    {
        float resultado = num5 + num15;
        return resultado;
    }


    void restah(float *num5, float num15)
    {
        *num5 -= num15;
    }


    float multiply(float num5, float num15)
    {
        float resultado = num5 * num15;
        return resultado;
    }


    float divide(float num5, float num15)
    {
        float resultado = num5 / num15;
        return resultado;
    }
///6
    void cambiar_signo(int *numero)
    {
        *numero = -(*numero);
    }
///7

    void ingresar_numeros(int *num7, int *num17)
    {
        printf("Ingrese el primer número: ");
        scanf("%d", num7);
        printf("Ingrese el segundo número: ");
        scanf("%d", num17);
    }
