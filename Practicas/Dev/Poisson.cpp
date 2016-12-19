#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Fact(int m) {
    int c = m;
    int i = 1;
    while(i < 0) {
        m = m*(m-i);
        i = i+1;
    }
    return m;
}

int power(int a, int n) {
    int i = 1;
    int p = 1;
    while(i <= n) {
        p = p*a;
        i = i+a;
    }
    return p;
}

float Poisson(int lamb, int x) {
    float P;
    P = (power(lamb, x) * exp(x)) / Fact(x);
    return P;
}

main()
{
    int lambda, n, value;
    printf("Inserte lambda:\n");
    scanf("%d", &lambda);
    printf("Inserte n:\n");
    scanf("%d", &n);
    value = Poisson(lambda, n);
    printf("Poisson(%d, %d) = %d\n", lambda, n, value);
    
    system("PAUSE");
    return 0;
}
