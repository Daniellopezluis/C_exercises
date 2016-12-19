#include <stdio.h>
#include <stdlib.h>

void main(){

    int segundos, dias, horas, minutos, segundos_restantes;
    printf("Inserte una cantidad en segundos:\n");
    scanf("%d", &segundos);

    dias = (segundos/86400);
    horas = (segundos%86400)/3600;
    minutos = ((segundos%86400)%3600)/60;
    segundos_restantes = (((segundos%86400)%3600)%60);

    printf("%d segundos equivalen a: %d dias, %d horas, %d minutos y %d segundos\n", segundos, dias, horas, minutos, segundos_restantes);

}
