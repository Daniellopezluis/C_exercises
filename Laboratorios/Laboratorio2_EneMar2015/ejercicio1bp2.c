#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

void main(){

    float radio, area, perimetro, volumen;
    printf("Inserte el radio de la circunferencia:\n");
    scanf("%f", &radio);

    area = PI*radio*radio;
    perimetro = 2*PI*radio;
    volumen = (float)(4/3)*(PI*radio*radio*radio);      //Se realiza cast de tipo (float) para garantizar
                                                        //que la operacion retorne valor de tipo float
    printf("El area del circulo es: %f\n", area);
    printf("El perimetro de la circunferencia es: %f\n", perimetro);
    printf("El volumen de la esfera es: %f\n", volumen);

}
