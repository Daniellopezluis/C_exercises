#include <stdio.h>
#include <stdlib.h>

int segundos, minutos, horas, dias, semanas;

int main()
{
    printf("Introduzca el numero de segundos:\n");
    scanf("%d", &segundos);

    //semanas = segundos/604800;
    //dias = (segundos%604800)/86400;
    dias = (segundos%86400)/3600;
    //horas = ((segundos%604800)%86400)/3600;
    //minutos = (((segundos%604800)%86400)%3600)/60;
    //segundos = (((segundos%604800)%86400)%3600)%60;

    //printf("f\n\n", )
    printf("Estos segundos equivalen a: \n", segundos);
    //printf("%d semanas\n%d dias\n%d horas\n%d minutos\n%d segundos\n", semanas, dias, horas, minutos, segundos);
    printf("dias = %d\n", dias);

    system("PAUSE");
    return 0;
}
