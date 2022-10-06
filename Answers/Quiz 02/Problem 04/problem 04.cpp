#include <bits/stdc++.h>

using namespace std;

#define EPSILON 0.0000001

int c;

double func(double x)
{
    return x*x*x + x*x + x - c;
}

void bisection(double a, double b)
{
    if(func(a) * func(b) > 0)
        return;

    double p = a;
    while((b-a) >= EPSILON)
    {
        p = (a+b)/2;

        if(func(p) == 0.0)
            break;
        else if(func(a) * func(p) < 0)
            b = p;
        else
            a = p;
    }
    printf("%.4f",p);
}


int main()
{
    cin>>c;
    double a = -200, b = 300;
    bisection(a,b);
    return 0;
}
