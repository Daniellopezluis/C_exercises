#include <cstdlib>
#include <iostream>
#include <stdio.h>
int mate, leng, ing, soc, fis;
int main()
{
    printf("Inserte la nota de mate 2\n");
    scanf("%d",&mate);
    printf("Inserte la nota de lenguaje 2\n");
    scanf("%d",&leng);
    printf("Inserte la nota de ingles 2\n");
    scanf("%d",&ing);
    printf("Inserte la nota de sociales 2\n");
    scanf("%d",&soc);
    printf("Inserte la nota de fisica 1\n");
    scanf("%d",&fis);
    float w = (mate*4+leng*3+ing*3+soc*3+fis*3);
    printf("El promedio da %f\n",w/16);
    system("PAUSE");
    return 0;
}
