#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int x)
{
    if(x<0)
        return;

    cout<<arr[x]<<" ";
    print(arr, x-1);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int x;
    cin>>x;
    int arr[x];

    for(int i=0; i<x; i++)
    {
        int y;
        cin>>y;
        arr[i] = y;
    }
    print(arr,x-1);

    return 0;
}
