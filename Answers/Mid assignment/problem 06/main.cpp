#include <bits/stdc++.h>

// problem 06

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    if(a == b)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

    return 0;
}
