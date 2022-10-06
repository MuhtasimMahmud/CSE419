#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    long long x;
    vector<long long>v1;
    vector<long long>v2;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        v2.push_back(x);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(auto itr = v1.begin(); itr != v1.end(); itr++)
    {
        auto it = upper_bound(v2.begin(), v2.end(), *itr);
        it--;

        if(*it == *itr)
            cout<< *itr << " ";
    }
    return 0;
}
