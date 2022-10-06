#include <bits/stdc++.h>

using namespace std;

int n,x,result;
int arr[1005];
int prefixSum[1005];


int subArraySum(int l, int r)
{
    return prefixSum[r] - prefixSum[l-1];
}

int main()
{
    cin>>n>>x;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(subArraySum(i,n-1) == x)
        {
            result++;
        }

    }
    cout<< result << endl;


    return 0;
}
