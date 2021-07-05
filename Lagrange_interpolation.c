#include<stdio.h>
#include<conio.h>
void main()
{
	float x[100], y[100], xd, yd=0, p;
	 int i,j,n;
	  /* Input */
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xd);
    printf("\n\n entered table is as follows :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%0.3f\t%0.3f",x[i],y[i]);
        printf("\n");
    } /*Lagrange Interpolation */
	 for(i=1;i<=n;i++)
	 {  p=1;
                for(j=1;j<=n;j++)
                    {  if(i!=j)
	              { 
                      p = p* (xd - x[j])/(x[i] - x[j]);
                    }
                     }
		  yd = yd + p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xd, yd);
	 getch();
}
