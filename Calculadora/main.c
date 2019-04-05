#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float resultado=0;
    float num1=0;
    float num2=0;

    while(seguir=='s'||seguir=='S')
    {
        system("cls");

        printf("1- Ingresar 1er operando (A=%.2f )\n",num1);
        printf("2- Ingresar 2do operando (B=%.2f )\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n \n");
        printf("Opcion: ");
        scanf("%d",&opcion);
        fflush(stdin);

        switch(opcion)
        {
        case 1: system("cls");
                num1=operando1();
                fflush(stdin);
                seguir=continuar();
            break;
        case 2: system("cls");
                num2=operando2();
                fflush(stdin);
                seguir=continuar();
            break;
        case 3: system("cls");
                suma(num1,num2);
                seguir=continuar();
            break;
        case 4: system("cls");
                resta(num1, num2);
                seguir=continuar();
            break;
        case 5: system("cls");
                division(num1, num2);
                seguir=continuar();
            break;
        case 6: system("cls");
                multiplicacion(num1, num2);
                seguir=continuar();
            break;
        case 7: system("cls");
                factorial(num1, num2);
                seguir=continuar();
            break;
        case 8: system("cls");
                suma(num1,num2);
                resta(num1, num2);
                division(num1, num2);
                multiplicacion(num1, num2);
                factorial(num1, num2);
                seguir=continuar();
            break;
        case 9: seguir = 'n';
            break;

        default: printf("Error debe ingresar los numeros de 1 a 9\n");
                 seguir=continuar();
        }
    }
    return 0;
}
