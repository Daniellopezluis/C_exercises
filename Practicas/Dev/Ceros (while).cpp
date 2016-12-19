#include <stdio.h>
#include <stdlib.h>

int n, ceros;

int main()
{
    system("COLOR b");
    printf("Inserte una serie de numeros, inserte -1 para terminar:\n");
    ceros = 0;
    n = 0;
    while(n != -1)
    {
        scanf("%d", &n);
        if(n == 0) {
            ceros = ceros + 1;
        }
    }
    printf("\tHay %d ceros entre los numeros insertados\n", ceros);
    
    system("PAUSE");
    return 0;
}
