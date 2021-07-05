#include <stdio.h>
#include <conio.h>
#include <math.h>
float eq1(float x,float y,float z)
{
  return ((10-2*y-z)/3);
}
float eq2(float x,float y,float z)
{
  return ((14-2*x-2*z)/3);
}
float eq3(float x,float y,float z)
{
  return ((14-x-2*y)/3);
}
void main()
{
  float x0,y0,z0,x1=0,y1=0,z1=0,tempx,tempy,tempz,e=0.0001;
  int iteration=0;
  printf("Enter initial guesses:\n");
  scanf("%f%f%f",&x0,&y0,&z0);
  do
  {
    tempx=x1;
    tempy=y1;
    tempz=z1;

    x1=eq1(x0,y0,z0);
    y1=eq2(x0,y0,z0);
    z1=eq3(x0,y0,z0);
   iteration++;

    x0=x1;
    y0=y1;
    z0=z1;
  }
while(fabs(tempx-x1)>e && fabs(tempy-y1)>e && fabs(tempz-z1)>e);

  printf("\n\nFinally,\n");
  printf("x=%f Ans\ny=%f Ans\nz=%f Ans\n",x1,y1,z1);
  printf("Iteration=%d",iteration);
  getch();
}
