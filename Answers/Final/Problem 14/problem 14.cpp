#include <bits/stdc++.h>

using namespace std;

int arr1[1005],arr2[1005],mem[1005],a1[1005],a2[1005];
int n;
vector<int>v1;
vector<int>v2;

int f(int i, int arr[])
{
    if(mem[i] != -1)return mem[i];

    int ans = 0;

    for(int j = i+1; j<n; j++)
    {
        if(arr[j] > arr[i])
        {
            ans = max(ans, f(j, arr));
        }
    }
    mem[i] = ans+1;
    return mem[i];
}

void LIS(int arr[], vector<int>&v)
{
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        mem[i] = -1;
    }
    for(int i=0; i<n; i++)
    {
        int x = f(i,arr);
        v.push_back(x);
    }
}

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr1[i];
    for(int i=0; i<n; i++)cin>>arr2[i];

    LIS(arr1,v1);
    LIS(arr2,v2);

    int ans = 0;
    for(auto i=v1.begin(); i!= v1.end(); i++)
    {
        auto it = find(v2.begin(), v2.end(), *i);

        if(it != v2.end())
        {
            ans = max(ans, *it);
        }
    }
    cout<< ans << endl;
    return 0;
}
