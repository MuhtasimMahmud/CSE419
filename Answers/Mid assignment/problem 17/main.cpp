#include <bits/stdc++.h>

// problem 17

using namespace std;

int freq[26];

int main()
{
    string x;
    cin>>x;

    int n = x.size();

    for(int i=0; i<n; i++)
    {
        freq[x[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(freq[i] > 0)
            cout<< char(i+'a') << " = " <<freq[i] <<"\n";
    }

    return 0;
}
