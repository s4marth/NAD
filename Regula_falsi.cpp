#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cmath>
using namespace std;

float f(float x)
{
    return((x*x)-25);
}
int main()
{
    int i;
    float a,b,m,e=0.0001;
    cout<<"enter the values of a and b";
    cin>>a>>b;
    if(f(a)*f(b)>0)
    {
        cout<<"invalid interval \n";
    }
    else
    {
        m=(a*f(b)-b*f(a))/(f(b)-f(a));
        i=1;
        while(fabs(f(m))>e)
        {
            cout<<"\n"<<i<<"\t"<<a<<"\t"<<b<<"\t"<<m<<"\t"<<f(m)<<"\t"<<f(a)*f(m);
            if(f(a)*f(m)>0)
                a=m;
            else
                b=m;
            m=(a*f(b)-b*f(a))/(f(b)-f(a));
            i=i+1;
        }
        cout<<"\n"<<i<<"\t"<<a<<"\t"<<b<<"\t"<<m<<"\t"<<f(m)<<"\t"<<f(a)*f(m);
        cout<<"\n root="<<m;
    }
    return 0;
}
