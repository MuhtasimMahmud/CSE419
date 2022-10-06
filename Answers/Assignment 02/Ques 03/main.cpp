#include <bits/stdc++.h>

using namespace std;

int counter = 0;


void print(int open, int close, string s)
{
    if(open == 0 && close == 0)
    {
        cout<<s<<"   ";
        counter++;
        return;
    }
    if(open != 0)
    {
        print(open-1, close, s+"(");
    }
    if(close > open)
    {
        print(open, close-1, s+")");
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin>>x;

    print(x,x,"");

    cout<<"string : "<<counter<<"\n";

    return 0;


}
