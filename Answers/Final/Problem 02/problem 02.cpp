#include <bits/stdc++.h>

using namespace std;

int arr1[105];
int arr2[105];


void find_union(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
            cout<< arr1[i++]<< " ";

        else if(arr2[j] < arr1[i])
            cout<< arr2[j++]<< " ";

        else
        {
            cout<< arr2[j++]<< " ";
            i++;
        }
    }

    while(i<n)
        cout<< arr1[i++] <<" ";
    while(j<m)
        cout<< arr2[j++] <<" ";
}


int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr1[i];

    int m;
    cin>>m;
    for(int i=0; i<m; i++)cin>>arr2[i];

    cout<<endl;

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    find_union(arr1, arr2, n, m);


    return 0;
}
