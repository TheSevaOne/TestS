#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void answer(int a,int b,int c);
void answer(int a,int b,int c)  
{
  double d,x1,x2;
  d=(b*b)-4*a*c;
  if (d>0)
  {
      x1=(-b+sqrt(d))/(2*a);
      x2=(-b-sqrt(d))/(2*a);
      printf("x1 = %f\n",x1); 
      printf("x2 = %f\n",x2); 
  }
  if (d<0)
  {
     fprintf(stderr, "D<0");
            exit(EXIT_FAILURE); 
  }
  if (d==0)
  {
      x1=(-b+sqrt(d))/(2*a);
      printf("x1=x2=%f\n", x1);
  } 
}
 
