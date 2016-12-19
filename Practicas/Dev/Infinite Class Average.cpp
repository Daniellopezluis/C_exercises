/* Programa de promedio de notas con
repeticion controlada por sentinela */
#include <stdio.h>
#include <stdlib.h>

main()
{
    float average;
    int counter, grade, total;
   
    /* fase de inicializacion */
    total = 0;
    counter = 0;
    
    /* fase de procesamiento */
    printf("Enter grade, enter -1 to end: ");
    scanf("%d", &grade);
    
    while(grade != -1) {
        total = total + grade;
        counter = counter + 1;
        printf("Enter grade, enter -1 to end: ");
        scanf("%d", &grade);
    }
    
    /* fase de finalizacion */
    if(counter !=0) {
        average = (float) total / counter;
        printf("Class average is %.2f\n", average);
    }
    else
        printf("No grades were entered\n");
    
    system("PAUSE");
    return 0;
}
