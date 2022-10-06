#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;

    double low = 0, high = x;

    for(int i=1; i<= 40; i++)
    {
        double mid = (low + high)/2;
        if(mid*mid > x)
            high = mid;
        else
            low = mid;
    }

    printf("%.6f",low);

    return 0;
}
