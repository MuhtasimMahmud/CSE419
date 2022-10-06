#include <bits/stdc++.h>

using namespace std;

int arr[10005];
int freq[10005];

int main()
{
    int n;
    cin>>n;
    memset(freq, 0, sizeof(freq));

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
        freq[x]++;
    }

    int j=1;

    for(int i=1; i<=n; i++)
    {
        while(freq[i] != 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;
}
