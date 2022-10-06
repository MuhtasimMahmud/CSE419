#include <bits/stdc++.h>

// problem 01

using namespace std;

vector<int> v;

void convert_binary(int x)
{
    while(x>0)
    {
        int a = x%2;
        v.push_back(a);
        x = x/2;
    }
}

int main()
{
    int x;
    cin>>x;

    convert_binary(x);

    reverse(v.begin(), v.end());
    for(int j=0; j < v.size(); j++)
    {
        cout<<v[j]<<"";
    }
}
