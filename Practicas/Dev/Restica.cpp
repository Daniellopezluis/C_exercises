# include <stdio.h>
#include<stdlib.h>

int resta(int[]);

int main () {
    int arreglo [5] = {1,2,3,4,5};
    resta(arreglo);
    printf("Da %d\n", resta(arreglo));
    system("PAUSE");
    return 0;
}
int resta ( int a[]){
    int restica , i;
    restica = 5;
    for( i = 3; i >= 0; i--){
        restica = restica - a[i];
    }
        return restica;
}
    
    
    
