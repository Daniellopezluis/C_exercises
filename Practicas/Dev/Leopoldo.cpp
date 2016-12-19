#include <stdio.h>
#include <stdlib.h>
int main()
{
    float semanas, dias, horas, minutos, segundos;
    printf("Por favor introduzca la cantidad de segundos\n");
    scanf("%f",&segundos);
    semanas=segundos/604800;
    dias=segundos/86400;
    horas=segundos/3600;
    minutos=segundos/60;
    printf("semanas en segundos: %f \n",semanas);
    printf("dias en segundos: %f \n",dias);
    printf("horas en segundos: %f \n",horas);
    printf("minutos en segundos: %f \n",minutos);
    system("PAUSE");
    return 0;
}
