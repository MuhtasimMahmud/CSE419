#include <bits/stdc++.h>

// problem 13

using namespace std;

int add(int a, int b)
{
    int sum = 0;

    while(b)
    {
        sum += a;
        b--;
    }
    return sum;
}


int main()
{
    int a,b;
    cin>>a>>b;

    cout<<add(a,b)<<endl;

    return 0;
}
