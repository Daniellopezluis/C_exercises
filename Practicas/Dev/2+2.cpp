#include <cstdlib>
#include <iostream>
#include <stdio.h>
int a;
int main()
{
    printf("cuanto es 2+2?\n");
    scanf("%d",&a);
    if(a==4)
    {
        printf("eres un genio!\n");
        system("PAUSE");
        return 0;
    }
    else if(a!=4)
    {
        printf("eres un gafo!\n");
        system("PAUSE");
        return 0;
    }
}
