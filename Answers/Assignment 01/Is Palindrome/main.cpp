#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    cin>>x;
    string temp = x;

    reverse(x.begin(), x.end());

    if(temp == x )
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

    return 0;
}
