#include<stdio.h>
#include<conio.h>
#include<math.h>
float fn(float x)
{
return (x*x);
}
 void main()
{
int i,n;
float a,b,s=0,y=0,h;
printf("Enter the no of interval =");
scanf("%d",&n);
printf("Enter the lower limit=");
scanf("%f",&a);
printf("Enter the upper limit=");
scanf("%f",&b);
h=(b-a)/n;
for(i=1;i<=n-1;i++)
{
       s=s+fn(a+i*h);
}
y=(fn(a)+fn(b)+2*s)*h/2;
printf("the value of y is=%f",y);
getch();
}
