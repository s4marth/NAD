#include<stdio.h>
float f1(float x,float y)
{
    float value;
    value=x+y;
    return value;
}
main()
{
    float a,b,x,y,h,t,k;
    printf("\nenter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("\n  x\t  y\n");
    while(x<=t)
    {
        k=h*f1(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}
