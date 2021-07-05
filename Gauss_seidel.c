#include<stdio.h>
#include<conio.h>
#include<math.h>
float f1(x,y,z)
{
    return ((10-2*y-z)/3);
}
float f2(x,y,z)
{
    return ((14-2*x-2*z)/3);
}
float f3(x,y,z)
{
    return ((14-x-2*y)/3);
}
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int itr=1;
 printf("Enter tolerable error:\n");
 scanf("%f", &e);
 printf("\nitr\tx\ty\tz\n");
 do
 {
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  printf("%d\t%0.3f\t%0.3f\t%.3f\n",itr,x1,y1,z1);
 /* Errors */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  itr++;
  x0 = x1;
  y0 = y1;
  z0 = z1;
}
 while(e1>e && e2>e && e3>e);
      printf("\nanswer x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);
 getch();
 return 0;
}
