//ques 05

#include <bits/stdc++.h>

using namespace std;


void change(string a, int i,int j)
{
    char temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void permu(string x, int start, int stop)
{
    if(start == stop)
    {
        cout<<x<<"\n";
        return;
    }
    for(int i=start; i<=stop; i++)
    {
        change(x, i, start);
        permu(x, start+1, stop);
        change(x, i, start);
    }
}


int main()
{
//    int n,k;
//    cin>>n>>k;
    string x = "ABC";
//
//    for(int i=1; i<=n; i++)
//    {
//        x = x+to_string(i);
//    }

    permu(x, 0, 2);

    return 0;
}
