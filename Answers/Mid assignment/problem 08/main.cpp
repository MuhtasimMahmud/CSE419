#include <bits/stdc++.h>

// problem 08

using namespace std;

int find_digits(int n)
{
    if(n < 0)
        return 0;
    if(n <= 1)
        return 1;

    double d = 0;
    for(int i=2; i<=n; i++)
    {
        d = d+log10(i);
    }
    return floor(d)+1;
}


int main()
{
    int n;
    cin>>n;

    int res = find_digits(n);
    cout<<res<<"\n";

    return 0;
}
