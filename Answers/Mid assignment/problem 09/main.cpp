#include <bits/stdc++.h>

// problem 09

using namespace std;

int per[105];

void permutation(int index, int n)
{
    if(index == n)
    {
        for(int i = 0; i<n; i++)
        {
            cout<<per[i]<<" ";
        }
        cout<<"\n";
        return;
    }

    for(int i=index; i<n; i++)
    {
        swap(per[i], per[index]);
        permutation(index+1, n);
        swap(per[i], per[index]);
    }
}


int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        per[i] = i+1;
    }

    permutation(0,n);
    return 0;
}
