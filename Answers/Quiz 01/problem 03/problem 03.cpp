#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    while(v.size() >= 2)
    {
        auto a = v.begin();
        auto b = v.begin()+1;

        cout<< *a <<" "<< *b << endl;

        int sum = *a + *b;

        v.erase(v.begin());
        v.erase(v.begin());

        v.push_back(sum);
        sort(v.begin(), v.end());
    }

    return 0;
}
