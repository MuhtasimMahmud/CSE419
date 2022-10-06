#include<bits/stdc++.h>

// problem 12

using namespace std;

char combination_data[1001];
int n,k,counter;
void combinations(char data[], int at, int k, int start, int end)
{
    if(at == k)
    {
        for(int i=0; i<k; i++)
        {
            cout<<combination_data[i];
        }
        cout<<"\n";
        counter++;
        return;
    }

    for(int i = start; i<=end; i++)
    {
        combination_data[at] = data[i];
        combinations(data, at+1, k, i, end);
    }
}


int main()
{
    char data[] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    n = 26;
    k = 3;
    combinations(data, 0, k, 0, n-1);
    cout<<counter;
}
