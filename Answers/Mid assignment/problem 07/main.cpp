#include <bits/stdc++.h>

// problem 07

using namespace std;

int main()
{
    string N;
    int m;

    cin>>N;
    cin>>m;

    int n = N.size();


    for(int j=0; j<n; j++)
    {
        int res = 0;
        int pow = 1;
        for(int i= n-1; i>=j; i--)
        {
            res = (res + (N[i]-'0')*pow)%m;
            pow = (pow*10)%m;
        }
        cout<<res<<"\n";
    }




    return 0;
}
