#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return (x*x)-x-1;
}
float g(float x)
{
    return sqrt(x+1);
}
int main()
{
	 int i=1, N;
	 float b, x1, e;
	 printf("Enter initial guess: ");
	 scanf("%f", &b);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);
	 
	 printf("\niteration\tb\t\tf(b)\t\tg(b)\t\tf(x1)\n");
	 do
	 {
		  x1 = g(b);
		  printf("%d\t%f\t%f\t%f\t%f\n",i, b, f(b), x1, f(x1));
		  i = i + 1;
		if(i>N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		   b = x1;
		  
	 }while( fabs(f(x1)) > e);
	  printf("\nRoot is %f", x1);
	 getch();
	 return(0);
}
