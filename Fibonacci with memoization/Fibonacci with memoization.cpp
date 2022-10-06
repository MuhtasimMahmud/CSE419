#include <bits/stdc++.h>

using namespace std;

#define maxn 100005
long long mem[maxn];

long long fib(long long n)
{
    if(n == 0 || n == 1)return 1;

    if(mem[n] != -1)return mem[n];

    mem[n] = fib(n-1) + fib(n-2);

    return mem[n];
}

int main()
{
    memset(mem, -1, sizeof(mem));
    cout<< fib(100) << endl;
    return 0;
}


