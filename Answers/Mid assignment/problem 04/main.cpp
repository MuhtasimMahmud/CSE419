#include <bits/stdc++.h>

// problem 04

using namespace std;

int main()
{
    string x;
    cin>>x;

    string temp = x;
    reverse(temp.begin(), temp.end());


    if(x == temp)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";


    return 0;
}
