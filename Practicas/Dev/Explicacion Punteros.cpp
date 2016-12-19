#include <stdio.h>
#include <stdlib.h>

void s1(int x, int y);
void s2(int x, int *y);
void s3(int *x, int *y);
void p(int x, int y);

main () {
    int a=5;
    int b=10;
    p(a,b);
    s1(a,b);
    p(a,b);
    s3(&a,&b);
    p(a,b);
    s2(a,&b);
    p(a,b);
    system("PAUSE");
    return 0;
}

void s1(int x, int y){int t=x; x=y; y=t;}
void s2(int x, int *y){int t=x; x=-*y; *y=t;}
void s3(int *x, int *y){int t=*x; *x=*y; *y=t;}
void p(int x, int y){printf ("a=%d\t b=%d\n",x,y);}
