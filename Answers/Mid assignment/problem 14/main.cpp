#include <iostream>

// problem 14

using namespace std;

int canPay(int coins[], int n, int amount)
{
    if(amount == 0)
    {
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(amount >= coins[i])
        {
            if(canPay(coins, n, amount-coins[i]) == 0)
                return 0;
        }
    }
}


int main()
{

    int coins[] = {7,13,19};
    int n = 3;

    int amount;
    cin>>amount;

    if(canPay(coins, n, amount) == 0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
