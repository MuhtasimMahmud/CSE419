#include <bits/stdc++.h>

// problem 05

using namespace std;

string a;
int counter = 0;

void isPalindrome(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    if(temp == s)counter++;
}

void permutation(int index, int n)
{
    if(index == n)
    {
        isPalindrome(a);
    }

    for(int i=index; i<n; i++)
    {
        swap(a[index], a[i]);
        permutation(index+1, n);
        swap(a[index], a[i]);
    }
}

int main()
{
    cin>>a;

    int n = a.size();

    permutation(0,n);
    if(counter > 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
