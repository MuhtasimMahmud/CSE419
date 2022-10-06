#include <bits/stdc++.h>

// problem 15

using namespace std;

int prefixSum[10001];

// 01011

int main()
{
    int n;
    string x;
    cin>>n>>x;

    for(int i=1; i<=n; i++)
        prefixSum[i] = prefixSum[i-1] + (x[i-1]-'0');

    int q;
    cin>>q;

    for(int i=0; i<=q; i++)
    {
        int l,r;
        cin>>l>>r;

        cout<<prefixSum[r] - prefixSum[l-1]<<endl;
    }


    return 0;
}
