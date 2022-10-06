#include <bits/stdc++.h>

// problem 11

using namespace std;

string a;
set<string> dp;


void permutation(int index, int n)
{
    if (index == n)
    {
        dp.insert(a);
        return;
    }

    for (int i = index; i < n; i++)
    {
        swap(a[index], a[i]);
        permutation(index + 1, n);
        swap(a[index], a[i]);
    }
}

int main()
{
    a = "HAPPINESS";

    int n = a.size();

    permutation(0,n);

    for(auto it = dp.begin(); it != dp.end(); ++it)
    {
        cout<<*it<<"\n";
    }

    return 0;

}
