#include <bits/stdc++.h>

using namespace std;

#define INF 99999999

int C[20];
int mem[20][10000];
int n,amount;

int f(int i, int amount)
{
    if (amount < 0)
        return INF;

    if(amount == 0)return 0;
    if (i == n)
    {
        if (amount == 0)
            return 0;
        return INF;
    }

    if(mem[i][amount] != -1)
        return mem[i][amount];


    int r1 = 1 + f(i , amount - C[i]);
    int r2 = f(i + 1, amount);

    mem[i][amount] = min(r1, r2);

    return mem[i][amount];
}

int main()
{
    cin>>n>>amount;
    for(int i=0; i<n; i++)cin>>C[i];

    memset(mem, -1, sizeof(mem));
    int ans = f(0,amount);
    cout<< ans << endl;

    vector<int>coins;
    while(n>0)
    {
        int a = f(n-1, amount);
        if(a != ans)
        {
            amount = amount - C[n];
            ans = ans - a;
            coins.push_back(C[n]);
        }
        n--;
    }
    for(int x : coins)
        cout<< x << " ";

    return 0;
}
