#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593

float radio, area, perimetro, volumen;

int main()
{
    printf("Introduzca el radio de la circunferencia: \n");
    scanf("%f", &radio);

    area = PI*radio*radio;
    perimetro = 2*PI*radio;
    volumen = ((4*PI*radio*radio*radio)/3);

    printf("El area del circulo es: %f\n", area);
    printf("El perimetro de la circunferencia es: %f\n", perimetro);
    printf("El volumen de la esfera asociada es: %f\n", volumen);

    system("PAUSE");
    return 0;
}
