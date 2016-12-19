#include <cstdlib>
#include <iostream>
#include <stdio.h>
int main()
{
    int a, b, m;
    printf("Este programa permite verificar la divisibilidad entre dos numeros enteros a y b de la forma a/b\n");
    printf("introduce el numero a\n");
    scanf("%d",&a);    
    printf("introduce el numero b\n");
    scanf("%d",&b);
    if(b==0)
    {
        printf("Error, inserta un numero distinto de cero\n");
        scanf("%d",&b);
    }
    float w=a/b;
    if(a%b!=0)
    {
        printf("No son divisibles\n");
        system("PAUSE");
    }
    else if(a%b==0)
    {
        printf("Son divisibles\n");
        printf("Cuanto da?\n");
        scanf("%d",&m);
        if(m==w)
        {
            printf("Bien!\n");
        }
        else if (m!=w)
        {
            printf("Mal!\n");
        }
            
        system("PAUSE");
    }
    return 0;
}
