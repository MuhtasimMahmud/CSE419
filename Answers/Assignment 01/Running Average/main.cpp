#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin>>n;

    int sum = 0;
    int x;

    for(int i =1; i<=n; i++)
    {
        cin>>x;
        sum = sum+x;
        if(sum%i == 0)
        {
            printf("%d\n",((sum/i)));
        }
        else
        {
            printf("%.10f\n",((float)sum/i));
        }
    }



    return 0;
}



