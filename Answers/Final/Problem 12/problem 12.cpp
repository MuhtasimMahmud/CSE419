#include <bits/stdc++.h>

using namespace std;

int grid[105][105];
int n,m;

int minPathSum()
{
    for(int i=1; i<n; i++)
        grid[i][0] = grid[i-1][0] + grid[i][0]; //row

    for(int j=1; j<m; j++)
        grid[0][j] = grid[0][j-1]+grid[0][j]; // column



    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            grid[i][j] = grid[i][j] + min(grid[i-1][j] , grid[i][j-1]);
        }
    }
    return grid[n-1][m-1];
}

int main()
{
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    int x = minPathSum();
    cout<< x << endl;


    return 0;
}
