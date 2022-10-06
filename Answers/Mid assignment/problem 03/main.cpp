#include <bits/stdc++.h>

// problem 03

using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;

    int sum = a+b;
    int digit_sum = 0;


    while(sum > 0)
    {
        digit_sum = digit_sum + (sum%10);
        sum = sum/10;
    }

    cout<<digit_sum<<"\n";


    return 0;
}
