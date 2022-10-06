#include <iostream>

// problem 16

using namespace std;

int arr[10001], diff[10001];
int sum;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++)
    {
        diff[i] = arr[i] - arr[i-1];
    }

    int q;
    cin>>q;

    for(int i=1; i<=q; i++)
    {
        int l,r,x;
        cin>>l>>r>>x;

        diff[l] = diff[l] + x;
        diff[r+1] = diff[r+1] - x;
    }

    for(int i=1; i<=n; i++)
    {
        arr[i] = arr[i-1] + diff[i];
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
