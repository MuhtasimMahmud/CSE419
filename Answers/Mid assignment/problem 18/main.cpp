#include <bits/stdc++.h>

// problem 18

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    char arr[x+2][y+2];

    char a;

    for(int i=0; i<x+2; i++)
    {
        for(int j=0; j<y+2; j++)
        {
            arr[i][j] = 'X';
        }
    }

    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
        {
            cin>>a;
            arr[i][j] = a;
        }
    }

    int safe = 0;

    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
        {
            if(arr[i][j] == 'V')
            {
                if(arr[i][j-1] == 'G' || arr[i][j+1] == 'G' || arr[i+1][j] == 'G' || arr[i-1][j] == 'G')
                {
                    safe++;
                }
            }
        }
    }
    cout<<"\n\n";
    cout<<"safe vips = "<<safe<<"\n";

    return 0;
}
