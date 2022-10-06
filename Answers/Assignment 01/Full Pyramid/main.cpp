#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
      for(int k =a-i;k>=1;k--)
      {
        cout<<" ";
      }
      for(int j=1;j<=i;j++)
      {
        if(j == i)
        {
            cout<<"*";
        }
        else
        {
                cout<<"* ";
        }
      }
      cout<<"\n";
    }
    return 0;
}
