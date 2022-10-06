#include <bits/stdc++.h>

using namespace std;

int a[105];

void prodArray(int a[], int n)
{
    if(n == 1)
    {
        cout<< "0";
        return;
    }
    int prod = 1;
    int p[n];

    for(int j=0; j<n; j++)p[j] = 1;

    for(int i=0; i<n; i++)
    {
        p[i] = prod;
        prod = prod*a[i];
    }

    prod = 1;
    for(int i=n-1; i>=0; i--)
    {
        p[i] = p[i]*prod;
        prod = prod*a[i];
    }

    for(int i=0; i<n; i++)cout<<p[i]<<" ";

    return;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)cin>>a[i];

    prodArray(a,n);

    return 0;
}
