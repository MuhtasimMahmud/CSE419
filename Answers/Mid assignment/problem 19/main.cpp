#include <bits/stdc++.h>

// problem 19

using namespace std;

int arr[100];
int moves = 0;

int main()
{
    int n,x;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr[i] = x;

        if(i>0 && arr[i] <= arr[i-1])
        {
            int diff = arr[i] - arr[i-1];
            if(diff < 0) diff = diff*(-1);

            arr[i] = (arr[i]+diff)+1;
            moves = moves+diff+1;
        }
    }

    cout<<moves<<endl;


    return 0;
}
