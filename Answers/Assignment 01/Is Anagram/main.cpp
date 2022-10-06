#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string x,y;
    cin>>x>>y;

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    if(x == y)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

    return 0;
}
