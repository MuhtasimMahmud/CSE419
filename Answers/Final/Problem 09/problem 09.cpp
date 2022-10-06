#include <bits/stdc++.h>

using namespace std;

double lnx(double x)
{
    double num, m, c, sum = 0;
    num = (x-1)/(x+1);

    for(int i=1; i<= 1000; i++)
    {
        m = (2*i)-1;
        c = pow(num,m);
        c = c/m;
        sum = sum + c;
    }

    return 2*sum;
}

int main()
{
    double x;
    cin>>x;

    printf("%.5f",lnx(x));

    return 0;
}
