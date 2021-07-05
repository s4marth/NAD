#include<stdio.h>
#include<math.h>
float f(float x)
{ 
  return (x*x)-x-1;
}
float df (float x)
{
  return 2*x-1;
}
void main()
{
    int iteration, maxmitr;
    float h, x0, x1, err;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &err, &maxmitr);
    for (iteration=1; iteration<=maxmitr; iteration++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf("Iteration no.%3d, x = %.3f\n", iteration, x1);
        if (fabs(h) < err)
        { 
          printf("After %3d iterations, root = %.3f\n", iteration, x1);
            return 0; 
        }
        x0=x1;
    }
    printf(" The required solution does not converge\n");
    return 1;
}
