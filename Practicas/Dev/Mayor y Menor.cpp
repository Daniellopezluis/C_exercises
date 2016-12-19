#include <stdlib.h>
#include <stdio.h>
int x, y, z, mayor, menor;

int main()
{
    printf("Introduzca tres numeros enteros separados por un espacio\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("X:%d; Y:%d; Z:%d\n", x,y,z);
    if(x >= y)
    {
        if(x >= z)
        {
            mayor = x;
            printf("El mayor es %d\n", mayor);
            if(y >= z)
            {
                menor = z;
                printf("El menor es %d\n", menor);
            }
            else
            menor = y;
            printf("El menor es %d\n", menor);
        }
        else
        mayor = z;
        menor = y;
        printf("El mayor es %d\n", mayor);
        printf("El menor es %d\n", menor);
    }
    else
    {
        if(y >= z)
        {
            mayor = y;
            printf("El mayor es %d\n", y);
            if(z >= x)
            {
                menor = x;
                printf("El menor es %d\n", menor);
            }
            else
            menor = z;
            printf("El menor es %d\n", menor);
        }
        else
        mayor = z;
        menor = x;
        printf("El mayor es %d\n", mayor);
        printf("El menor es %d\n", menor);
    }
    system("PAUSE");
    return 0;
}
