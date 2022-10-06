#include <bits/stdc++.h>

// problem 20

using namespace std;

int main()
{

    unsigned long long n;
    cin>>n;

    int x;
    set<int> s;

    for(unsigned long long i = 0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }

    cout<<s.size()<<"\n";
    return 0;
}
