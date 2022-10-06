#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    set<int> s;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    int max_duration = 0;

    for(auto itr = s.begin(); itr != s.end(); ++itr)
    {
        int a = *itr;
        if(a > t)
            continue;

        int x = (t - a);
        s.erase(a);
        auto it = s.upper_bound(x);
        it--;

        if((a + *it) <= t)max_duration = max(max_duration, (a + *it));

        s.insert(a);
    }

    cout<<max_duration<<endl;
    return 0;
}
