#include <stdio.h>
#include <stdlib.h>
main()
{
    int counter, grade, total, average;
    total = 0;
    counter = 1;
    
    while(counter <= 10)
    {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }
    
    average = total / 10;
    printf("Class average is %d\n", average);
    system("PAUSE");
    return 0; 
}
