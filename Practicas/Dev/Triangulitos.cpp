#include <stdlib.h>
#include <stdio.h>

int x1, x2, x3, y1, y2, y3;
float lado12, lado23, lado31;

int main()
{
    printf("Inserte las coordenadas del punto 1 separadas por un espacio\n");
    scanf("%d %d", &x1, &y1);
    printf("Inserte las coordenadas del punto 2 separadas por un espacio\n");
    scanf("%d %d", &x2, &y2);
    printf("Inserte las coordenadas del punto 3 separadas por un espacio\n");
    scanf("%d %d", &x3, &y3);

    if((x1==x2 && y1==y2)||(x2==x3 && y2==y3)||(x3==x1 && y3==y1))  /*Verifica que no es el mismo punto*/
    {
        printf("Los puntos dados no forman un triangulo\n");
    }
    else if((x1==x2 && x2==x3) || (y1==y2 && y2==y3))   /*Verifica colinealidad*/
    {
        printf("Los puntos dados no forman un triangulo\n");
    }
    else if(x1==y1 && x2==y2 && x3==y3)
    {
        printf("Los puntos dados no forman un triangulo\n");   /*Verifica desigualdad de coordenadas*/
    }
    else if(((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) == ((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2)) &&   /*Lados iguales*/
    ((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2)) == ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)))
    {
        printf("Los puntos dados forman un triangulo equilatero\n");
    }
    else 
    {
         printf("Los puntos dados NO forman un triangulo equilatero\n");
    }
    system("PAUSE");
    return 0;
}
