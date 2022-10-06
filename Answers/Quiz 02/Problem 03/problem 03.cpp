#include <bits/stdc++.h>

using namespace std;

vector<long long>v;

int smaller_element(int x)
{
    int low = 0;
    int high = v.size()-1;
    int counter = 0;

    while(low < high)
    {
        int mid = ((low + high)/2);

        if(x > v[mid])
        {
            counter = mid+1;
            low = mid+1;
        }
        else
            high = mid-1;
    }
    return counter;
}

int main()
{
    int n,q,x;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        int c = smaller_element(x);
        cout<<c<<endl;
    }
    return 0;
}
