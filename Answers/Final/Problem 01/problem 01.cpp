#include <bits/stdc++.h>

using namespace std;

char Hex[105];

void decToHex(int n)
{
    int i = 0;
    while(n != 0)
    {
        int temp = n%16;

        if(temp < 10)
            Hex[i++] = temp+48;
        else
            Hex[i++] = temp+55;

        n = n/16;
    }

    for(int j=i-1; j>=0; j--)
        cout<< Hex[j];
}

int main()
{
    int n;
    cin>>n;

    decToHex(n);

    return 0;
}
