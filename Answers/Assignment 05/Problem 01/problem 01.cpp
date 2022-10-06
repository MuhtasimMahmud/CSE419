#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col;
    cin>> row >> col;

    vector<string>grid(row);

    for(int i=0; i<row; i++)
        cin>>grid[i];


    int stx, sty, ex, ey;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(grid[i][j] == 's')
            {
                stx = i;
                sty = j;
            }
            else if(grid[i][j] == 'e')
            {
                ex = i;
                ey = j;
            }
        }
    }

    vector<int> dx = {-1, -1, -1, +0, +0, +1, +1, +1};
    vector<int> dy = {-1, +0, +1, -1, +1, -1, +0, +1};

    vector<vector<int>> dis(row, vector<int>(col,-1));
    vector<vector<int>>vis(row,vector<int>(col));

    queue<int>q;
    dis[stx][sty] = 0;
    vis[stx][sty] = 1;

    q.push(stx);
    q.push(sty);

    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        int y = q.front();
        q.pop();

        for(int k=0; k<8; k++)
        {
            int nx = x+dx[k], ny = y+dy[k];
            if(nx >= 0 && nx < row && ny >=0 && ny < col && grid[nx][ny] != 'x' && vis[nx][ny] == 0)
            {
                dis[nx][ny] = dis[x][y] + 1;
                vis[nx][ny] = 1;
                q.push(nx);
                q.push(ny);
            }
        }
    }
    cout<< dis[ex][ey];

    return 0;
}

/**

4 4

oxox
sxoe
oxxo
oooo

**/
