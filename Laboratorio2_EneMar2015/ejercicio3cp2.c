/*
------------------------------------------------------------
    NOMBRE DEL ARCHIVO: ejercicio3cp2.c
    DESCRIPCION: Programa que solicita una cantidad en segundos
                y la desglosa en dias, horas, minutos y segundos.
                Ademas, revisa la precondicion.
    AUTOR: Daniel Lopez
    ULTIMA MODIFICACION: 11/01/2015
------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void main(){

    int segundos, dias, horas, minutos, segundos_restantes;
    printf("Inserte una cantidad en segundos:\n");
    scanf("%d", &segundos);

    //Precondicion: segundos >= 0
    if(segundos < 0){
        printf("\n** ERROR. La precondicion no se satisface. El programa terminara **\n");
        exit(0);
    }

    dias = (segundos/86400);                            // segundos/(segundos por dia)
    horas = (segundos%86400)/3600;                      // (segundos restantes menores a un dia)/(segundos por hora)
    minutos = ((segundos%86400)%3600)/60;               // (segundos restantes menores a una hr)/(segundos por minuto)
    segundos_restantes = (((segundos%86400)%3600)%60);  // segundos restantes menores a un minuto

    //Poscondicion: segundos desglosados en su equivalente en dias, horas, minutos y segundos restantes.
    printf("%d segundos equivalen a: %d dias, %d horas, %d minutos y %d segundos\n", segundos, dias, horas, minutos, segundos_restantes);

}
