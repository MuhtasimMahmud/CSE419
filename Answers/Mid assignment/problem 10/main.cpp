#include <bits/stdc++.h>

// problem 10

using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        arr[i] = i+1;
    }

    for(int mask = 0; mask < (1<<n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if((mask&(1<<i)) != 0 )
            {
                cout<<arr[i]<<" ";
            }
        }
        if(mask > 0)cout<<"\n";
    }

    return 0;
}
