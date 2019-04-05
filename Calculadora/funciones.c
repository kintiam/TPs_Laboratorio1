#include <stdio.h>
#include <stdlib.h>

float operando1()
{
    float num1;
    printf("Ingrese el primer operando: ");
    scanf("%f", &num1);
    return num1;
}

float operando2()
{
    float num2;
    printf("Ingrese el segundo operando: ");
    scanf("%f", &num2);
    return num2;
}

void suma(float num1, float num2)
{
    float resultado;
    resultado=num1+num2;
    printf("La suma de %.2f + %.2f es: %.2f\n",num1,num2,resultado);
}

void resta(float num1, float num2)
{
    float resultado;
    resultado=num1-num2;
    printf("La resta de %.2f - %.2f es: %.2f\n",num1,num2,resultado);
}

void division(float num1, float num2)
{
    float resultado;
    char seguir='s';
    while(num2==0&&(seguir=='s'||seguir=='S'))
    {
        printf("Error, el segundo operando no puede ser 0.\n Desea cambiar el numero?: \n");
        printf("Respuesta: ");
        scanf("%c", &seguir);
        fflush(stdin);

        if(seguir=='s'||seguir=='S')
        {
            num2=operando2();
        }
    }
    if(num2!=0)
        {
        resultado=num1/num2;
        printf("La division entre %.2f / %.2f es: %.2f\n",num1,num2,resultado);
        }
}

void multiplicacion(float num1, float num2)
{
    float resultado;
    resultado=num1*num2;
    printf("La multiplicacion entre %.2f * %.2f es: %.2f\n",num1,num2,resultado);
}

void factorial(float num1, float num2)
{
    int num1_entero=num1;
    int num2_entero=num2;
    char seguir='s';
    long long acumulador1=1;
    long long acumulador2=1;

            //DECIMAL--------O--NEGATIVO
    while((num1-num1_entero!=0||num1<0)&&(seguir=='s'||seguir=='S'))
    {

        fflush(stdin);
        printf("Error, el operador no puede ser decimal o menor a 0.\n Desea cambiar el numero?: \n");
        printf("Respuesta: ");
        scanf("%c", &seguir);
        if(seguir=='s'||seguir=='S')
            num1=operando1();
            num1_entero=num1;
    }   //ENTERO-------y--POSITIVO
    if(num1-num1_entero==0&&num1>0&&num1!=0)
    {
        long long i=1;

        for(i; i<=num1; i++)
        {
            acumulador1=acumulador1*i;
        }
        printf("El resultado del factorial del 1er operando es: %lli\n",acumulador1);
    }
    else
    {
        acumulador1=0;
        printf("El resultado del factorial del 1er operando es: %lli\n",acumulador1);
    }


////


    while((num2-num2_entero!=0||num2<0)&&(seguir=='s'||seguir=='S'))
    {

        fflush(stdin);
        printf("Error, el operador no puede ser decimal o menor a 0.\n Desea cambiar el numero?: \n");
        printf("Respuesta: ");
        scanf("%c", &seguir);
        if(seguir=='s'||seguir=='S')
            num2=operando2();
            num2_entero=num2;
    }


//ENTERO-------y--POSITIVO


    if(num2-num2_entero==0&&num2>0&&num2!=0)
    {
        long long i=1;

        for(i; i<=num2; i++)
        {
            acumulador2=acumulador2*i;
        }
        printf("El resultado del factorial del 2do operando es: %lli\n",acumulador2);
    }
    else
    {
        acumulador2=0;
        printf("El resultado del factorial del 2do operando es: %lli\n",acumulador2);
    }
}

char continuar()
{
    char seguir;
    fflush(stdin);
    printf("Desea continuar operando??? [S/N]\n");
    printf("Respuesta: ");
    scanf("%c", &seguir);

    while(seguir!='s'&&seguir!='n'&&seguir!='S'&&seguir&&seguir!='N')
    {
        fflush(stdin);
        printf("Error debe ingresar la tecla 's' para seguir o 'n' para salir. \n");
        printf("Respuesta: ");
        scanf("%c", &seguir);
    }
    return seguir;
}
