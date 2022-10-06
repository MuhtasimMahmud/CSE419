#include <bits/stdc++.h>

using namespace std;

int arr[1005];
bool visited[1005];
bool reachable = false;

void checkReachability(int index, int N)
{
    if (reachable)
      return;
    if (index >= N || index < 0)
      return;

    if (visited[index])
      return;

    visited[index] = true;

    if (index == N - 1)
    {
      reachable = true;
      return;
    }

    checkReachability(index - arr[index], N);
    checkReachability(index + arr[index], N);
}


int main()
{
    int N;
    cin>>N;

    int i;
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    checkReachability(0, N);

    if(reachable)
        printf("YES");
    else
        printf("NO");

    return 0;
}

/**

case 1:
5
2 3 1 3 2

case 2 :
3
1 2 1

**/
