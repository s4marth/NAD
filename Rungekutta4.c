#include<stdio.h>
#include<math.h>
float f1(float x,float y)
{
    float a;
    a=(x+y);
    return a;
}
int main()
{
    float x0,y0,k1,k2,k3,k4,k,y,x,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        k1=f1(x0,y0);
        k2=f1((x0+h/2.0),(y0+k1*h/2.0));
        k3=f1((x0+h/2.0),(y0+k2*h/2.0));
        k4=f1((x0+h),(y0+k3*h));
        k=((k1+2*k2+2*k3+k4)/6);
        y=y+k*h;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
}
