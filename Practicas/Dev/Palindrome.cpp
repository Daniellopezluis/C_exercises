#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palabra[30];
int palindro = 1;

int main () {
    printf("Inserte una palabra (en minusculas):\n");
    scanf("%s", palabra);
    
    int i;
    int size = strlen(palabra);
    
    for(i = 0; i < (size/2); i++) {
        if( palabra[i] != palabra[size - i -1]) {
            palindro = 0;
        }
    }
    
    if(palindro != 0) {
        printf("La palabra %s es palindrome\n", palabra);
    } else {
        printf("La palabra %s NO es palindrome\n", palabra);
    }
    system("PAUSE");
}
