#include <stdio.h>
#include <stdlib.h>

void p1(int *i,int j,int k);
void p2(int h,int *j);
void p3(int *i);

main()
{
   int i,j,k;
   i=0; j=1; k=2;
   p2(0,&k);
   p2(1,&i);
   p2(2,&j);
   system("PAUSE");
}	

void p1(int *i,int j,int k)
{
   (*i)++;
   printf("%d %d %d",*i,j,k);
}

void p2(int h,int *j)
{
   int i, k;
   i=*j;
   if (h==0)
      p1(&i,*j,k);
   else
      p3(&h);
   printf("%d %d %d",i,*j,k);
}

void p3(int *i)
{
  (*i)++;
}
