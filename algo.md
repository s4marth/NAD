## **NAD Assignment ALGORITHMS & Flowcharts      IT-2k19-51(Samarth Sharma)**
## 1 Bisection Method Algorithm:
1. Start
1. Read a, b, e=0.0001 
1. ` `Compute: f1 = f(a) and f2 = b)
1. If (f1\*f2) > 0, then display initial guesses are wrong and goto (11).
   Otherwise continue.
1. m = (a + b)/2
1. while (|f(m)>= e ), then do 
1. print i,a,b,m,f(m)
1. if(f(a).f(m)>0)then
1. a=m
1. Else, b = m
1. Endif
1. m = (a + b)/2   i=i+1
1. endwhile
1. print i,a,b,m,f(m)
1. endif 

`    `11. Stop





## 2 Regula Falsi Method Algorithm:
1. Start
1. Read values of a, b and e=0.001
   \*Here a and b are the two initial guesses
   e is the degree of accuracy or the absolute error \*
1. Computer function values f(a) and f(b)
1. Check whether the product of f(a) and f(b) is negative or not.
   If it is positive, take another initial guess.
   If it is negative then goto step 5.
1. Determine:
   m = [a\*f(b) – b\*f(a)] / (f(b) – f(a))
1. Check whether the product of f(b) and f(m) is negative or not.
   If it is negative, then assign a = m;
   If it is positive, assign b = m;
1. Check whether the value of f(m) is greater than 0.0001 or not.
   If yes, goto step 5.
   If not, goto step 8.
1. Display the root as m.
1. Stop


## 3 Secant Method Algorithm:
1. Start
1. Get values of a, b and e
   \*Here a and b are the two initial guesses
   e is the stopping criteria, absolute error or the desired degree of accuracy\*
1. Compute f(a) and f(b)
1. Compute m = [a\*f(b) – b\*f(a)] / [f(b) – f(a)]
1. Test for accuracy of b
   If [ (m – b)/b ] > e, \*Here [ ] is used as modulus sign\*
   then assign a = b and b = m
   goto step 4
   Else,
   goto step 6
1. Display the required root as m.
1. Stop



## 4 Newton Raphson Method Algorithm:
1. Start
1. Read b, e 
   \*b is the initial guess
   e is the absolute error\* 
1. m=b-(f(b)/f’(b))
1. i=1
1. while (|f(m)|>e)
1. print I,b,m,f(m)
1. b=m
1. m= b-(f(b)/f’(b))
1. i=i+1
1. end of while
1. Stop.


## 5 Fixed point Iteration Method :
1. Start
1. Read values of b and e.
   \*Here b is the initial approximation
   e is the absolute error or the desired degree of accuracy, also the stopping criteria\*
1. Calculate m = g(b)
1. If [m – b] <= e, goto step 6.
   \*Here [ ] refers to the modulus sign\*
1. Else, assign b = m and goto step 3.
1. Display m as the root.
1. Stop


2 Algorithms for applying Interpolation using: 
## 1 Lagrange’s Interpolation 
\1. Start

\2. Read number of data (n)

\3. Read data Xi and Yi for i=1 to n

\4. Read value of independent variables xd and yd.

\5. Initialize: yd = 0

\6. For i = 1 to n

`     `Set p = 1

`     `For j =1 to n

`       `If i ≠ j then 

`         `Calculate p = p \* (xd - Xj)/(Xi - Xj)

`       `End If

`     `Next j

`     `Calculate yd = yd + p \* Yi

`   `Next i

\6. Display value of yd as interpolated value.

\7. Stop


2. ## Divided Difference interpolation Table
1. Start
1. Enter values for x[i] y[i] and value of k on which value is to be found
1. `    `do
1. `        `for (i=1;i<=n-1;i++)
1. `            `p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
1. `            `y[i]=p[i]; 
1. `        `f1=1;
1. `        `for(i=1;i<=j;i++)
1. `             `f1\*=(k-x[i]); 
1. `        `f2+=(y[1]\*f1);
1. `        `n--;
1. `        `j++; end do
1. `    `while(n!=1);
1. `    `f+=f2;
1. `    `printf("\nf(%d) = %d", k , f);
1. End while
1. ` `Stop 
## 3 Difference Table
## ` `Forward Difference
1. Enter the no. of data values to be entered, ‘n’.
1. Declare an array ‘x’ of size ‘n’ for the x-values and ‘ynxn’ for y-values and the difference table.
1. For i=0 to n-1
1. Enter xi.
1. For i=0 to n-1
1. Enter yi0.
1. For j=1 to n-1
1. For i=0 to n-j
1. yij=yi+1j-1-yij-1.
1. Print forward diff table



\# system of Linear Equations
## `  `1 A Gauss Elimination Method
1. Start
1. Declare the variables and read the order of the matrix n.
1. Take the coefficients of the linear equation as:
   `	`Do for k=1 to n
   `	`Do for j=1 to n+1
   `	`Read a[k][j]
   `	`End for j
   End for k
1. Do for k=1 to n-1
   `	`Do for i=k+1 to n
   `		`Do for j=k+1 to n+1
   `		`a[i][j] = a[i][j] – a[i][k] /a[k][k] \* a[k][j]
   `	`End for j	End for i
   End for k
1. Compute x[n] = a[n][n+1]/a[n][n]
1. Do for k=n-1 to 1
   sum = 0
   `	`Do for j=k+1 to n
   `	`sum = sum + a[k][j] \* x[j]
   End for j
   `	`x[k] = 1/a[k][k] \* (a[k][n+1] – sum)
   End for k
1. Display the result x[k]
1. Stop

## 2 Algorithm for Iterative Method
A Jacobi Iteration Method

1Start

\2. Arrange given system of linear equations in diagonally dominant form

\3. Read tolerable error (e)

\4. Convert the first equation in terms of first variable, second equation in terms of second variable and so on. 

\5. Set initial guesses for x0, y0, z0 and so on

\6. Substitute value of x0, y0, z0 ... from step 5 in equation obtained in  step 4 to calculate new values  x1, y1, z1 and so on

\7. If| x0 - x1| > e and | y0 - y1| > e and | z0 - z1| > e and so on then goto step 9

\8. Set x0=x1, y0=y1, z0=z1 and so on and goto step 6

`         `9. Print value of x1, y1, z1 and so on

`         `10. Stop

Gauss-Seidel Method

1. Start
1. Declare the variables and read the order of the matrix n
1. Read the stopping criteria er
1. Read the coefficients aim as
   ` `Do for i=1 to n
   `	`Do for j=1 to n
   `		`Read a[i][j]
   Repeat for j
   Repeat for i
1. Read the coefficients b[i] for i=1 to n
1. Initialize x0[i] = 0 for i=1 to n
1. Set key=0
1. For i=1 to n
   `	`Set sum = b[i]
   `	`For j=1 to n
   `		`If (j not equal to i)
   `		`Set sum = sum – a[i][j] \* x0[j]
   Repeat j
   x[i] = sum/a[i][i]
   If absolute value of ((x[i] – x0[i]) / x[i]) > er, then
   Set key = 1
   Set x0[i] = x[i]
   Repeat i
1. If key = 1, then
   Goto step 6
   Otherwise print results




#. Algorithm for Ordinary Differential Equations.
## 1 Euler Method
1. Start
1. Define function
1. Get the values of x0, y0, h and xn
   \*Here x0 and y0 are the initial conditions
   h is the interval
   xn is the required value
1. n = (xn – x0)/h + 1
1. Start loop from i=1 to n
1. y = y0 + h\*f(x0,y0)
   x = x + h
1. Print values of y0 and x0
1. Check if x < xn
   If yes, assign x0 = x and y0 = y
   If no, goto 9.
1. End loop i
1. Stop

## 2 Runge-kutta Method 4th order
1. Read x0,y0,xf,h
1. while(x0<=xf)
1. Print ,x0,y0
1. K1 <- h\*f(x0,y0)
1. K2 <- h\*f(x0+0.5h,y0+0.5k1)
1. K3 <- h\*f(x0+0.5h,y0+0.5k2)
1. K4<- h\*f(x0+h,y0+k3)
1. K=(k1+2k2+2k3+k4)/6
1. x <- x0+h
1. y<-y0+k
1. end while
1. Print ,x,y
1. End while
1. End



#NUMERICAL integration methods

TRAPEZODIAL rule

1. Read n
1. For i=1 to n in steps of 1 do
1. Read xi yi
1. End for
1. h<-x2-x1
1. Sum<-y1+yn
1. For i=2 to n-1 in steps of 1 do
1. Sun<-sum+2\*yi
1. End for
1. Integral<-(sum\*h)/2
1. Print integral
1. end


SIMPSON 1/3 RULE

1. start
1. read a,b,n
1. h=(b-a)/n
1. for i=0 to n in steps of 1 do
1. read xi yi
1. end for
1. sum<-y0+yn;
1. for i=1 to n-1 in steps of 1 do
1. if(i%2==0)
1. sum+=2\*yi
1. else
1. sum+=4\*yi
1. end for
1. integral=(sum\*h)/3
1. print integral
1. end























