#include <stdlib.h>
#include <stdio.h>

int x, y;

int main()
{
    printf("Bienvenido! inserte dos numeros enteros separados por un espacio\n");
    scanf("%d %d", &x, &y);
    
    if(x == y)
    {
        printf("Todo numero es multiplo de si mismo\n");
    }
    if(x > y)
    {
        if(y == 0)
        {
            printf("Ningun numero es multiplo de cero ya que no es posible\ndividir entre este\n");
        }
        else if(x % y == 0)
        {
            printf("\t**********************\n");
            printf("\t%d es multiplo de %d\n", x, y);
            printf("\t**********************\n");
        }
        else 
        {
            printf("\t**********************\n");
            printf("\t%d NO es multiplo de %d\n", x, y);
            printf("\t**********************\n");
        }
    }
    else if(y > x)
    {
        if(x == 0)
        {
            printf("Ningun numero es multiplo de cero ya que no es posible\ndividir entre este\n");
        }
        else if(y % x == 0)
        {
            printf("\t**********************\n");
            printf("\t%d es multiplo de %d\n", y, x);
            printf("\t**********************\n");
        }
        else
        {
            printf("\t**********************\n");
            printf("\t%d NO es multiplo de %d\n", y, x);
            printf("\t**********************\n");
        }
    }
    
    system("PAUSE");
    return 0;
}
